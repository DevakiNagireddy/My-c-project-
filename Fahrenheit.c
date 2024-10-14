#include<stdio.h>
main()
{
float c,f;

printf("enter the temperature in fahrenheit:");
scanf("%f",&f);
c=((f-32)*5/9);
printf("temperature in celsius is %f",c);
}