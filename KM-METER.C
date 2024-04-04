// conver kilo-meter to meter
//author: naitik patel
#include<stdio.h>
#include<conio.h>
void main(){
	   int km;
	   float meter;
	   clrscr();
	   printf("\nEnter the value of km : ");
	   scanf("%d",&km);

	   meter =(float)km*1000;
	   printf("\nThe meter is %f",meter);
	   getch();

	 }//end of main