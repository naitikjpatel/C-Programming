#include<stdio.h>
#include<conio.h>
void main(){
	   int num;
	   clrscr();
	   printf("\nEnter the number ");
	   scanf("%d",&num);
	   if(num > 0){
		  printf("\nPositive number");
	   }else if(num < 0){
		  printf("\nNegative number");
	   }else{
		  printf("\n number is zero");
	   }
	   getch();




}  //end of main