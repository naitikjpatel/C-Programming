/*              Author; naitik patel
		objective: program to find area and circumference of circle
*/
#include<stdio.h>
#include<conio.h>
void main(){
	int radius;
	float area ,ci,pi=3.14;
	clrscr();
	printf("\nEnter the radius of a circle:");
	scanf("%d",&radius);

	area=pi*radius*radius;
	ci=2*pi*radius;

	printf("\ncircle area is %f",area);
	printf("\ncircle cirumference is %f",ci);
	getch();
	}//end of main