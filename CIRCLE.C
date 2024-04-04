#include<stdio.h>
#include<conio.h>
#define PI 3.14
void main(){
	  int a;
	  float area,perameter;
	  clrscr();
	  printf("\nEnter the radius");
	  scanf("%d",&a);

	  perameter =2*PI*a;
	  printf("\nThe circle perameter is %f",perameter);

	  area=PI*a*a;
	  printf("\nThe circle area is %f",area);
	  getch();

	  }

