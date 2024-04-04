/*            Author : Naitik patel
	      objective : to write a program for simple interest

*/
#include<stdio.h>
#include<conio.h>
void main(){
	int p,r,n;
	float si;
	clrscr();
	printf("\nEnter the princpal amount :");
	scanf("%d",&p);
	printf("\nEnter the rate of interest :");
	scanf("%d",&r);
	printf("\nEnter the number of year:");
	scanf("%d",&n);

	si=p*r*n/100;
	printf("\nThe simple interest is %.2f",si);
	getch();
	}//end of main