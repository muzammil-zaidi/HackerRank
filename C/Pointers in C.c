#include <stdio.h>
#include<stdlib.h>

void update(int *a,int *b) {
    // Complete this function
    int sum=*a;
    int sub=*b;
    *a=sum+sub;
    *b=abs(sum-sub);    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
