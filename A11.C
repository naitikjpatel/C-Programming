/*     11).celsius to farnhiet
*/
#include<stdio.h>
#include<conio.h>
void main(){
	 double f,c;
	 clrscr();
	 printf("\nEnetr the temprature in celsius");
	 scanf("%lf",&c);
	 f=9.0/5*c+32;
	 printf("\nThe temprature in farnhiet is %lf",f);
	 getch();
	 }//end of main