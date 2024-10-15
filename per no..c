#include <stdio.h>
 main(){
 int sum=0,n,i;
 printf("enter the value:");
 scanf("%d",&n);
 for(i=1;i<n;i++){
 if(n%i==0)
   sum=sum+i;
  }
 if(sum==n){
  printf("perfect no\n");
 }
 else {
 printf("no");}
 }