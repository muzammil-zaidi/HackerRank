#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin>>a>>b;
    int c=0, d=0;
    
    c=a+b;
    d=a-b;
    
    if(d<0){
        d=d*(-1);
    }
    
    cout<<c<<endl;
    cout<<d;

    return 0;
}
