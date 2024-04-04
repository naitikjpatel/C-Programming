/*     find area and perameter of circle
*/
#include<stdio.h>
#include<conio.h>

void main(){
	int r;
	float area ,perameter;
	clrscr();
	printf("\nEnter the radius");
	scanf("%d",r);
	area=3.14*r*r;
	perameter=2*3.14*r;
	printf("\ncircle area is %f",area);
	printf("\ncircle perameter is %f",perameter);
	getch();
	}//end of main
