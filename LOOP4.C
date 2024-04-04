// c program to find sum of natural numbers from 1 to n
#include<stdio.h>
#include<conio.h>
void main(){
	   int i ,n ,sum=0;
	   clrscr();
	   //input upper limit from user
	   printf("\nEnter upper limit:");
	   scanf("%d",&n);

	   //find sum of all numbers
	   for(i=0;i<=n;i++)
	   {
	      sum += i;
	      }//end of for

	   printf("\nsum of first %d natural numbers = %d",n,sum);
	   getch();
	   }//end of main