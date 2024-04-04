/*    maximum  number find in three different number
*/
#include<stdio.h>
#include<conio.h>
void main(){
	   int a,b,c;
	   clrscr();
	   printf("\nenter the value of a");
	   scanf("%d",&a);
	   printf("\nenter the value of b");
	   scanf("%d",&b);
	   printf("\nEnter the value of c");
	   scanf("%d",&c);
	   if(a>b&&a>c){
		printf("\n%d is maximum",a);
	   }else if(b>a&&b>c){
		printf("\n%d is maximum",b);
	   }else{
		printf("\n%d is maximum");
	   }//end of if else
	   getch();
	   }//end of main

