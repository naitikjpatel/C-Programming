/*        objev=ctive: convert days to years ,weeks,days
	   author ;naitik patel


*/
#include<stdio.h>
#include<conio.h>
void main(){
	  int days ,years ,weeks;
	  clrscr();
	  printf("\nEnter days");
	  scanf("%d",&days);

	  years=(days/365);
	  weeks=(days%365)/7;
	  days=days-((years*365) + (weeks*7));

	  printf("\nYears is %d",years);
	  printf("\nweeks is %d",weeks);
	  printf("\ndays is %d",days);
	  getch();


    }