//multiplication table
#include<stdio.h>
#include<conio.h>
void main(){
	 int i,n;
	 clrscr();
	 printf("\nYou want to choice number for multiplication");
	 scanf("%d",&n);

	 for(i=1;i<=10;i++){
		 printf("\n%d * %d = %d",n,i,n*i);
	 }//end of for loop
	 getch();
	 }//end of main