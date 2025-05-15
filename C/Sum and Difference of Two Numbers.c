#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int n1,n2;
    scanf("%d",&n1);
    scanf("%d",&n2);
    float n3,n4;
    scanf("%f",&n3);
    scanf("%f",&n4);
    int a=0,b=0;
    a=n1+n2;
    b=n1-n2;
    float c=0,d=0;
    c=n3+n4;
    d=n3-n4;
    printf("%d %d\n",a,b);
    printf("%.1f %.1f",c,d);
    
    return 0;
}
