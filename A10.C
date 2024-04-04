/*   convert temperature from fahrenheit to celsius
*/
#include<stdio.h>
#include<conio.h>
void main(){
	double c,f;
	clrscr();
	printf("\nEntr the temp in farhenhit");
	scanf("%lf",&f);
	c=5.0/9*(f-32);
	printf("\ntemprature in celsius is %.2lf",c);
	getch();
	}//end of main