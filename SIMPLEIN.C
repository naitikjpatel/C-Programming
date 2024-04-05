#include<stdio.h>
#include<conio.h>
void main(){
	 int n;
	 float p,r,si;
	 clrscr();
	 printf("\nEnter the principle amount ");
	 scanf("%f",&p);
	 printf("\nEnter the amount rate");
	 scanf("%f",&r);
	 printf("\nEnter the year");
	 scanf("%d",&n);
	 si=p*r*n/100;
	 printf("\nThe simpple interest is %f",si);
	 getch();

   }
