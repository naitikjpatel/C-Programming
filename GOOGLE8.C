/*   objective:fahrenheit to celsius
     author: naitik patel


  */
#include<stdio.h>
#include<conio.h>
void main(){
	  float celsius ,fahrenheit;
	  clrscr();
	  printf("\nEnter the temperature in fahrenheit");
	  scanf("%f",&fahrenheit);

	  celsius =(fahrenheit-32)*5/9 ; //formula of fernhit to cvelsius
	  printf("\ncelsius is %f",celsius);
	  getch();

	}