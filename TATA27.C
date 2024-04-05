/*         Author : naitik patel
	   objective : program to add two number using pointers
*/
#include<stdio.h>
#include<conio.h>
void main(){
	  int *p1,*p2,sum;
	  clrscr();
	  printf("\nEnter two value:");
	  scanf("%d%d",&*p1,&*p2);
	  sum=*p1+*p2;
	  printf("\nThe sum is %d",sum);
	  getch();
   }//end of main