#include <stdio.h>
main() {
    float r,u;
    scanf("%f",&u);
    if(u<=50.0) {
        r=u*0.50;
        printf("%f",r);
    }
    else if(u>50.0&&u<=150.0) {
        r=50*0.50+(u-50)*0.75;
        printf("%f",r);
    }
    else if(u>150.0&&u<=250.0) {
        r=50*0.50+100*0.75+(u-150)*1.20;
        printf("%f",r);
    }
    else {
        r=50*0.50+100*0.75+150*1.20+(u-250)*1.5;
        printf("%f",r);
    }
}