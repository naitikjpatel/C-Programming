/*         author : naitik paterl
	   objective : program to use bitwise and operator
		       between the two integers
*/
#include<stdio.h>
#include<conio.h>
void main(){
       int a,b,c;
       clrscr();
       printf("\nEnter the value of a and b:");
       scanf("%d%d",&a,&b);
       c=a&b;
       printf("\nthe answer after ANDing is :%d",c);
       getch();
       }//end of main