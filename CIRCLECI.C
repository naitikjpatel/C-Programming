//program
#include<stdio.h>
#include<conio.h>
void main(){
	 int r;
	 float area,ci,pi=3.14;
	 clrscr();
	 printf("\nEnter the circle radius:");
	 scanf("%d",&r);

	 area=pi*r*r;
	 ci=2*pi*r;
	 printf("\nCircle area is %f",area);

	 printf("\nCircle ci is %f",ci);

	 getch();
	 }//end of main