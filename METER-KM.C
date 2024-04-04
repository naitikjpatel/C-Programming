#include<stdio.h>
#include<conio.h>
void main(){
	  int meter;
	  float km;
	  clrscr();
	  printf("\nEnter the value in meter:");
	  scanf("%d",&meter);

	  km =meter/1000;
	  printf("\nThe kilo-meter is %.2f",km);
	  getch();

	  }// end of main