  /*   objectiv: calculat area of circle



*/
#include<stdio.h>
#include<conio.h>
void main(){
	  float radius,area;
	  clrscr();
	  const Pi=3.14;
	  printf("\nEnter radius");
	  scanf("%f",&radius);

	  area = Pi * radius * radius;
	  printf("\nThe area is %f",area);
	  getch();

  }