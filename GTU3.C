/*         author:naitik patel
	   objective:write a program for simple interest
*/
#include<stdio.h>
#include<conio.h>
void main(){
	  int p,r,n;
	  float si;
	  clrscr();
	  printf("\nEnter principle amount");
	  scanf("%d",&p);
	  printf("\nEnter rate of amount");
	  scanf("%d",&r);
	  printf("\nEnter number of year");
	  scanf("%d",&n);
	  si=p*r*n/100;
	  printf("\nThe simple interest is %.2f",si);
	  getch();
	  }//end of main