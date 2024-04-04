//c program to find maximum between two numbers using switch case

#include<stdio.h>
#include<conio.h>
void main(){
	 int num1,num2;
	 clrscr();
	 //input two numbers from user
	 printf("\nEnter two numbers to find maximum:");
	 scanf("%d%d",&num1,&num2);
	 //expression (num1>num2)will return either 0 or 1
	 switch(num1>num2){
	     //if condition (num1>num2) is false
	    case 0:
		   printf("\n%d is maximum",num2);
		   break;
	     //if condition (num1>num2)is true;
	    case 1:
		   printf("\n%d is maximum",num1);
		   break;
		   }//end of switch
		   getch();
		   }//end of main
