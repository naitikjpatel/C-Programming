/*  calculate compound interest
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>

void main(){
	 double p,r,n,ans;
	 clrscr();
	 printf("\nEnter the p");
	 scanf("%lf",&p);
	 printf("\nEnter the r");
	 scanf("%lf",&r);
	 printf("\nEnter the n");
	 scanf("%lf",&n);
	 ans=p*(pow(1+r/100,n)-1);
	 printf("\nThe ans is %0.2lf",ans);
	 getch();
	 }//end of main