/*            Author : naitik patel
	      objective: program to display series and find sum of 1+3+5+...
*/
#include<stdio.h>
#include<conio.h>
void main(){
       int n,i,sum=0;
       clrscr();
       printf("\nEnter any number:");
       scanf("%d",&n);
       for(i=1;i<n;i=i+2){
		   printf("%d+",i);
		   sum=sum+i;
	    }//end of for loop
       printf("%d",n);
       printf("\nsum=%d",sum+n);
       getch();
       }//end of main