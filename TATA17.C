/*      objective:program to display first 10 natutal number 7 thair sum
*/
#include<stdio.h>
#include<conio.h>
void main(){
	 int i,sum=0;
	 clrscr();
	 for(i=0;i<=10;i++)
	 {
	    printf("%d no is=%d\n",i,i);
	    sum=sum+i;
	 }
	 printf("\nThe sum is %d",sum);
	 getch();
	 }//end of main