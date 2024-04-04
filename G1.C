/*   c program to find area and circumference of circle*/
#include<stdio.h>
#include<conio.h>
void main(){
	 int r;   // r form radius
	 float pi=3.14,area,ci;

	 printf("\nEnter the radius:");
	 scanf("%d",&r);

	 area=pi*r*r;
	 printf("\nThe circle areais %f:",area);

	 ci=2*pi*r;
	 printf("\nThe circle circumference is %f:",ci);

	 getch();

	 }//end if main