/* od  even check using while loop

*/
#include<stdio.h>
#include<conio.h>
void main(){
       int n,i=1;
       clrscr();
       printf("\nEnter the value of n");
       scanf("%d",&n);
       while(i<=n){
	    if(i%2==0){
		printf("\neven number is %d",i);
	    }
	    i++;
      }//end of while
      getch();
      }//end of main