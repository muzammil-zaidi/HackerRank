#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    int a,b,c,d,e;
    a=n%10;
    b=(n%100)/10;
    c=(n%1000)/100;
    d=(n%10000)/1000;
    e=(n/10000);
    int sum=0;
    sum=a+b+c+d+e;
    printf("%d",sum);
    return 0;
}
