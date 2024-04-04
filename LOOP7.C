//c program to count number of digits in an integer
#include<stdio.h>
#include<conio.h>
void main(){
	   long long num;
	   int count=0;
	   clrscr();
	   //input number from user
	   printf("\nEnter any number:");
	   scanf("%lld",&num);

	   //run loop till num is greater than 0

	   do
	   {
	       //increment digit count
	       count++;

	       //remove last digit of'num'
	       num/=10;
	       }while(num !=0);

	       printf("total digits :%d",count);
	       getch();
	       }//end of main
