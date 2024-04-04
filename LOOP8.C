// c program to last digit of any number
#include<stdio.h>
#include<conio.h>
void main(){
	 int n,lastdigit;
	 clrscr();
	 //input number from user
	 printf("\nEnter any number:");
	 scanf("%d",&n);

	 //get the last digit
	 lastdigit = n%10;
	 printf("\nLastdigit = %d",lastdigit);
	 getch();
	 }//end of main