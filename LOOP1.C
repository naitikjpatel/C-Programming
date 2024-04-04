//c program to print all natural numbers from 1 to n
#include<stdio.h>
#include<conio.h>
void main(){
	 int i,n;
	 clrscr();
	 //input uper limit from user
	 printf("\nEnter any number:");
	 scanf("%d",&n);

	 // 1.  start loop counter from 1(i=1) and go till n(i<=n)
	 // 2.  increment the loop count by 1 to get the next value.
	 // 3.  for  each repition printthe value of i.

	 for(i=1;i<=n;i++)
	 {
	      printf("%d\n",i);
	      }//end of for loop

     getch();
     }//end of main