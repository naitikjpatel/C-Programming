/*          author : naitik patel
	    objective : program to show of two number without using
	     third variable
*/
#include<stdio.h>
#include<conio.h>
void main(){
	int a,b;
	clrscr();
	printf("\nEnter the value of a & b:");
	scanf("%d%d",&a,&b);

	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nvalue of a & b is %d & %d",a,b);
	getch();
	}//end of main