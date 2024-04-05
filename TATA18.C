/*         Author : naitik patel
	   Objective : program to printf stars sequencel
*/
#include<stdio.h>
#include<conio.h>
void main(){
       int i,n,j;
       clrscr();
       printf("\nyou want to printf of raw enter the number");
       scanf("%d",&n);
       for(i=1;i<=n;i++)
       {
	  for(j=1;j<=i;j++)
	  {
	      printf("*");
	  }
	 printf("\n");
       }//end of for
       getch();

 }//end of main
