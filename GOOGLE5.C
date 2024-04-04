#include<stdio.h>
#include<conio.h>
#define p printf
void main(){
	int a,b;
	clrscr();
	p("\nEnter the number 1");
	scanf("%d",&a);
	p("\nEnetr the number 2");
	scanf("%d",&b);
	p("\nThe addition is %d ",a+b);
	p("\nThe subtraction is %d ",a-b);
	p("\nThe multiplication is %d",a*b);
	p("\nThe division is %d",a/b);
	p("\nThe modulus is %d",a%b);
	getch();

	}//end of main
