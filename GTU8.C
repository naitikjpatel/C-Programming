/*           author: naitik patel
	     objective : to write a c program for number is positive
		  ,negative and zero
*/
#include<stdio.h>
#include<conio.h>
void main(){
	 int num;
	 clrscr();
	 printf("\nEnter any number");
	 scanf("%d",&num);
	 if(num>0){
	     printf("\nNumber is positive");
	 }else if(num<0){
	     printf("\nNumber is negative");
	 }else{
	     printf("\nNumber is zero");
	 }
	 getch();
	 }//end of main
