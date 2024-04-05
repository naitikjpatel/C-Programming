/*         author : naitik patel
	   objective :program to converst temprecture from degree centigrade
	       to fahrenheit
*/
#include<stdio.h>
#include<conio.h>
void main(){
	 float c,f;
	 clrscr();
	 printf("\nenter the temrature in centigrade :");
	 scanf("%f",&c);
	 f=(1.8*c)+32;
	 printf("\ntemp in fahrenheit=%f",f);
	 getch();
	 }