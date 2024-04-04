/*     objective:convert feet to meter
       author: naitik patel
       google6.c

  */
#include<stdio.h>
#include<conio.h>
void main(){
	 float meter,feet;
	 clrscr();
	 printf("\nEnter feet : ");
	 scanf("%f",&feet);
	 meter=feet/3.2808399;
	 printf("\nMeter : %f",meter);
	 getch();

	 }