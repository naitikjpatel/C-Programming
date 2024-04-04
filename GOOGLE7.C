/*        objectiv: to create programm for calsius to fahenhit

  */
#include<stdio.h>
#include<conio.h>
void main(){
	 float celsius,fahrenhit;
	 clrscr();
	 printf("\nEnter the temperature in celsius");
	 scanf("%f",&celsius);

	 fahrenhit =(1.8*celsius)+32; //formula of celsius to fahrenhit
	 printf("\nTemperature in fahrenhit %f",fahrenhit);
	 getch();

    }//end of main