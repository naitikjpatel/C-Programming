/*              author: naitik patel
		objective: in thrre number is maximum number using
			   nested if else
*/
#include<stdio.h>
#include<conio.h>
void main(){
	 int num1,num2,num3;
	 clrscr();
	 printf("\nenter the value of num1");
	 scanf("%d",&num1);
	 printf("\nenter the value of num2");
	 scanf("%d",&num2);
	 printf("\nenter the value of num3");
	 scanf("%d",&num3);
	 if(num1>num2){
		if(num1>num3){
		    printf("\nnum1 is maximum");
		}else{
	    printf("\nnum3 is maximum");
	    }  //end of if
	 }else{
	       if(num2>num3){
		  printf("\nnum2 is maximum");
	       }else{
		  printf("\nnum3 is maximum");
	       }
	 }//end of else
	 getch();
     }//end of main

