/*         author: naitik patel
	   objective:write a progarm to find area of triangle
*/
#include<stdio.h>
#include<conio.h>
void main(){
	int b,h; //b=base,h=height
	float area;
	clrscr();
	printf("\nEnter the base of triangle");
	scanf("%d",&b);
	printf("\nEnter the height of triangle");
	scanf("\%d",&h);
	area=0.5*b*h;
	printf("\nTriangle area is %.2f",area);
	getch();
	}//end of main