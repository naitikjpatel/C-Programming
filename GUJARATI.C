//c program of interchange two numbers without third variable
#include<stdio.h>
#include<conio.h>
void main(){
       int a,b;
       clrscr();
       printf("\nEnter the values of a & b:");
       scanf("%d%d",&a,&b);

       a=a+b;
       b=a-b;
       a=a-b;
       printf("\nvalues of a is %d",a);
       printf("\nvalues of b is %d",b);

       getch();
       }//end if main