/*         author: naitik patel
	   objective:writea c progarm to input an integer number and
		     check the last digit of number is even or odd
*/
#include<stdio.h>
#include<conio.h>
void main(){
	 int i;
	 clrscr();
	 printf("\nEnter the value ");
	 scanf("%d",&i);
	 if((i%10)%2==0){
		printf("\nLast digit is even");
	 }else{
		printf("\nLast digit is odd");
	 }
	 getch();
	 }//end of main