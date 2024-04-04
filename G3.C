/*        objective:find the area of tiangle
*/
#include<stdio.h>
#include<conio.h>
void main(){
	 int b,h;
	 float area;
	 clrscr();
	 printf("\nEnter base and height");
	 scanf("%d%d",&b,&h);

	 area=1/2*b*h;
	 printf("\nTriangle area is %f",area);
	 getch();
	 }//end of main