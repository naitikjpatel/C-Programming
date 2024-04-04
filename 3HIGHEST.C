#include<stdio.h>
#include<conio.h>
void main(){
	  int num1,num2,num3;
	  clrscr();
	  printf("\nEnter value of num1,num2 and num3 :");
	  scanf("%d %d %d",&num1,&num2,&num3);
	  if((num1 > num2) && (num1>num3)){
	     printf("\nNumber 1 is greatest");
	  }else if((num2 > num1) && (num2 > num3)){
	     printf("\nNUmber 2 is greatest");
	  }else{
	     printf("\nNUmber 3 is greatest");
		}

	     getch();
}
