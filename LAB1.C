/*           author : naitik patel
	     objective : find a area of triangle
*/
#include<stdio.h>
#include<conio.h>
void main(){
	float h,b;
	float area;
	clrscr();
	printf("\nEnter the hight of triangle :");
	scanf("%f",&h);
	printf("\nEnter the base of triangle :");
	scanf("%f",&b);

	area =h*b/2;
	printf("\nArea oa triangel is %f",area);
	getch();

	}//end of main