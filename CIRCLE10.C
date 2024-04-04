/*               Author : Naitik patel
		 objective : circle area and ci

*/
#include<stdio.h>
#include<conio.h>
#define PI 3.14
void main(){
	int R;
	float area,N;
	clrscr();

	printf("\nEnter circle radius:");
	scanf("%d",&R);

	area = PI * R * R;
	printf("\nCircle area is %f",area);

	N=3.14 * 2 * R;
	printf("\n%lf",N);


	getch();
	}//end of main
