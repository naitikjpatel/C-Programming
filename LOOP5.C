// c program to find sum of odd numbers from 1 to n
#include<stdio.h>
#include<conio.h>
void main(){
	 int i,n,sum=0;
	 clrscr();
	 //input upper limit from user
	 printf("\nEnter any number:");
	 scanf("%d",&n);
	 // find the sum of all odd number
	 for(i=1;i<=n;i+=2)
	 {
	      sum +=i;
	  }//end of for
	  printf("\nsum of odd numbers = %d",sum);
	  getch();
	  }//end of main