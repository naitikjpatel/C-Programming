#include<stdio.h>
#include<conio.h>
#define p printf
void main(){
	 int a,b,c;
	 clrscr();
	 p("\nEnter the number 1");
	 scanf("%d",&a);
	 p("\nEnter the number 2");
	 scanf("%d",&b);
	 c=a;
	 a=b;
	 b=c;
	 printf("\na=%d,b=%d",a,b);
	 getch();

	 }
