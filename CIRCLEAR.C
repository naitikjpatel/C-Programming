#include<stdio.h>
#include<conio.h>
void main(){
	int r;
	float area;

	clrscr();
	printf("\nEnter circle radius:");
	scanf("%d",&r);
	area=2*3.14*r;

	printf("\nThe area is %f",area);
	getch();
	} //end of main
