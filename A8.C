/*calculat simple interest
*/
#include<stdio.h>
#include<conio.h>
void main(){
	int p,r,n;
	float si;
	clrscr();
	printf("\nEnter the principle amount");
	scanf("%d",&p);
	printf("\nenter the rate of amount");
	scanf("%d",&r);
	printf("\nEnter the number of year");
	scanf("%d",&n);
	si=(p*r*n)/100;
	printf("\nThe simple interest is %0.2f",si);
	getch();
	}//end of main