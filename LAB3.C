/*          Author : naitik patel
	    objetive :write program for swap number
*/
#include<stdio.h>
#include<conio.h>
void main(){
	int a,b;
	clrscr();
	printf("\nEnter the number of a:");
	scanf("%d",&a);
	printf("\nEnter the number of b:");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nAfter swap a is %d and b is %d",a,b);
	getch();
	}//end of main