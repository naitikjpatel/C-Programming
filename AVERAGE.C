#include<stdio.h>
#include<conio.h>
void main(){
	  int a,b,c;
	  float avg;
	  clrscr();
	  printf("\nEnter a:");
	  scanf("%d",&a);
	  printf("\nEnter b:");
	  scanf("%d",&b);
	  printf("\nEnetr c:");
	  scanf("%d",&c);

	  avg=(a+b+c)/(float)3;
	  printf("\nAverage %f",avg);
	  getch();

	  }//end of main