#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

vector<int> parseInts(string str) {
    vector<int> result;
    stringstream ss(str);
    int number;
    char ch;
    
    while (ss >> number) { // Extract integer
        result.push_back(number);
        ss >> ch; // Extract comma
    }
    
    return result;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    
    for (int num : integers) {
        cout << num << "\n";
    }
    
    return 0;
}
