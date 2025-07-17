#include <iostream>
#include <map>
#include <stack>
#include <sstream>
using namespace std;

map<string, map<string, string>> hrml;

void parseHRML(int n) {
    stack<string> tagStack;
    string line;
    
    while (n--) {
        getline(cin, line);
        
        if (line[1] == '/') {  // Closing tag
            tagStack.pop();
        } else {  // Opening tag with attributes
            stringstream ss(line);
            string tag, attr, eq, value;
            ss >> tag;
            tag = tag.substr(1); // Remove '<'
            if (tag.back() == '>') tag.pop_back(); // Remove '>' if no attributes
            
            string prefix = tagStack.empty() ? "" : tagStack.top() + ".";
            string tagPath = prefix + tag;
            tagStack.push(tagPath);
            
            while (ss >> attr) {
                ss >> eq; // Read '='
                getline(ss, value, '"'); // Read opening quote
                getline(ss, value, '"'); // Read actual value
                hrml[tagPath][attr] = value;
            }
        }
    }
}

void processQueries(int q) {
    string query;
    while (q--) {
        getline(cin, query);
        size_t pos = query.find('~');
        string tagPath = query.substr(0, pos);
        string attr = query.substr(pos + 1);
        
        if (hrml.count(tagPath) && hrml[tagPath].count(attr)) {
            cout << hrml[tagPath][attr] << endl;
        } else {
            cout << "Not Found!" << endl;
        }
    }
}

int main() {
    int n, q;
    cin >> n >> q;
    cin.ignore(); // Ignore the newline after reading numbers
    
    parseHRML(n);
    processQueries(q);
    
    return 0;
}
