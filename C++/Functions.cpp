#include <iostream>
#include <cstdio>
using namespace std;


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int max;
    
    if(a>b && a>c && a>d){
        max=a;
    }
    
    else if(b>a && b>c && b>d){
        max=b;
    }
    
    else if(c>b && c>a && c>d){
        max=c;
    }
    
    else{
        max=d;
    }
    
    cout<<max;
    
    return 0;
}
