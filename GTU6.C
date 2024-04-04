/*        author:naitik patel
	  objective:write a program to compute fahrenheit from centograde
		    formula is f=9/5*c+32
*/
#include<stdio.h>
#include<conio.h>
void main(){
	int c;    //f is fahrenhiet
	float f;
	clrscr();
	printf("\nEnter the temprature in centigrate:");
	scanf("%d",&c);
	f=c*1.8+32;
	printf("\nthe answer is in fahrenhiet is %.2f",f);
	getch();
	}//end of main
