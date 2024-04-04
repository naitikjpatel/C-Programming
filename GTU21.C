/*       Author:naitik patel
	 objective:write a c program to find the sum and average of different
		  numbers which are accepted by user as many as user wants
*/
#include<stdio.h>
#include<conio.h>
void main(){
    int no,sum=0,i=0,temp,val;
    clrscr();
    printf("\nhoe many number you want to enter");
    scanf("%d",&no);
    while(i<no){
	  printf("\nEnter the no[%d]:",i+1);
	  scanf("%d",&val);
	  sum=sum+val;
	  i++;
	  }
    printf("\nsum=%d",sum);
    printf("\nsum=%.2f",((float)sum)/no);
    getch();
    }//end of main