/*write a c program to find sum of first N natural number
*/
#include<stdio.h>
#include<conio.h>
void main(){
	 int i=1,n,sum=0;
	 clrscr();
	 printf("\nEnter the value of n");
	 scanf("%d",&n);
	 while(i<=n){
	     sum=sum+i;
	     i++;
	 }//end of while
	 printf("\nThe sum is %d",sum);
	 getch();
	 }//end of main