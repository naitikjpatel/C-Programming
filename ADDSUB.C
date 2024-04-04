#include<stdio.h>
#include<conio.h>
void main(){
	  int a,b,sum,sub;
	  clrscr();
	  printf("\nEnter the value of a and b:");
	  scanf("%d%d",&a,&b);

	  sum=a+b;
	  printf("\nThe addition is %d",sum);
	  sub = a-b;
	  printf("\nthe subtraction is %d",sub);

	  getch();
	  }