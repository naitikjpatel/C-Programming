/*    author :naitik patel
      objective : to wite aprogram week test
*/
#include<stdio.h>
#include<conio.h>
void main(){
	 int p,r,n;
	 float si;
	 clrscr();
	 printf("\nEnter the value of principle amount");
	 scanf("%d",p);
	 printf("\nenter the rate");
	 scanf("%d",&r);
	 printf("\nenter the number of year");
	 scanf("%d",&n);
	 si=p*r*n/100;
	 printf("\nThe simple interest is %f",si);
	 getch();
  }//end of main