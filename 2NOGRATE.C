#include<stdio.h>
#include<conio.h>
void main(){
	   int num1,num2;
	   clrscr();
	   printf("\nEnter the number 1:");
	   scanf("%d",&num1);
	   printf("\nEnter the number 2:");
	   scanf("%d",&num2);
	   if(num1 > num2){
		   printf("\n%d is graterthan %d",num1,num2);
	   }else{
		   printf("\n%d is graterthan %d",num2,num1);
		   }
		   getch();



}