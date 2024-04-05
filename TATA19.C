/*         Author : naitik patel
	   objective : program to print stars sequence2
*/
#include<stdio.h>
#include<conio.h>
void main(){
	int i,j,k,n;
	clrscr();
	printf("\nEnter the number");
	scanf("%d");

	for(i=0;i<=n;i++)
	{
	     for(j=5;j>=i;j--)
	     {
		pritnf(" ");
	     }
	     for(k=1;k<=i;k++)
	     {
		printf("*");
	     }

	   printf("\n");
      }//end of outer for loop

      getch();
    }//end of main