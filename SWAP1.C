//aim : swap two veriable using third variable

#include<stdio.h>
#include<conio.h>
#define p printf
void main(){
	 int a,b;
	 clrscr();
	 p("\nEnter the number 1:");
	 scanf("%d",&a);
	 p("\nEnetr the numebr 2:");
	 scanf("%d",&b);
	 /*a=5,b=7
	 a=a+b=12

	 */
	 a=a+b;
	 b=a-b;
	 a=a-b;
	 p("\na=%d,b=%d",a,b);
	 getch();

	 }