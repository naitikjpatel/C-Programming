/*
	progrma : find the area of circle

*/

#include<stdio.h>
#include<conio.h>
#define PI 3.14
void main(){
	int radius;
	printf("Enter the radius for the circle");
	scanf("%d",&radius);

	int area=PI*radius*radius;
	printf("Circle area is %d",radius);
	getch();
}