/*       objective:find the area and ci of circle
*/
#include<stdio.h>
#include<conio.h>
#define pi 3.14
void main(){
	int r;
	float area,ci;

	clrscr();
	printf("\nEnter the radius of a circle:");
	scanf("%d",&r);
	area=pi*r*r;
	ci=2*pi*r;
	printf("\nThe circle area is %f",area);
	printf("\nThe circle ci is %f",ci);
	getch();
	}//end of main
