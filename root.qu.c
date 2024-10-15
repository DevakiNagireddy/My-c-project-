#include <stdio.h>
#include <math.h>
main() {
    int a,b,c,r1,r2,d;
    printf("enter the values:");
    scanf("%d %d %d",&a,&b,&c);
    d=(b*b-(4*a*c));
    r1=(-b+sqrt(d)/2*a);
    r2=(-b-sqrt(d)/2*a);
    if(d>0)
        printf("the root are real and distinct %d,%d",r1,r2);
    else if(d==0)
        printf("the roots are equal %d,%d",r1,r2);
    else
        printf("the roots are imaginary");
}
