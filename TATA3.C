/*          Author :naitik patel
	    objective : program to find simple interest
*/
#include<stdio.h>
#include<conio.h>
void main(){
	 int p,r,t;
	 float si;
	 clrscr();
	 printf("\nEnter the principle amount:");
	 scanf("%d",&p);
	 printf("\nEnter the rate :");
	 scanf("%d",&r);
	 printf("\nEnter the time :");
	 scanf("%d",&t);

	 si=p*r*t/100;
	 printf("\nThe simple interest is %.2f",si);
	 getch();
	 }//end of main