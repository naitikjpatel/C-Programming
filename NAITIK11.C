#include<stdio.h>
#include<conio.h>
void main(){
       int a,b,sum,sub,multi;
       float div;
       clrscr();
       printf("\nEnter the value of a& b");
       scanf("%d%d",&a,&b);

       sum=a+b;
       sub=a-b;
       multi=a*b;
       div=a/b;

       printf("\nThe addition is %d",sum);
       printf("\nThe subtraction is %d",sub);
       printf("\nThe multipliaction is %d",multi);
       printf("\nThe division is %0.2f",div);
       getch();
       }//end of main