#include<stdio.h>
void main()
{
float t1,t2;
char unit;
printf(" enter the temperature :");
scanf("%f",&t1);
printf("\nenter'c'if the temperature is in celcious omd 'f' if it is farenheit :");
scanf(" %c",&unit);
if(unit=='c')
  {
  t2=1.8*t1+32.0;
  printf(" \nthe given temperature %f in celcious is equal to %f in farenheit ",t1,t2);
  }
else
   {
   t2=(5.0*(t1-32.0))/9.0;
   printf ("\nthe given temperature %f in farenheit is equal to %f in celcious ",t1,t2);
}
 }