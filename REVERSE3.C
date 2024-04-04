/*     Author: naitik patel
       objective: to write a program user enter any number and riverse value
*/
#include<stdio.h>
#include<conio.h>
void main(){
	 int n,i,temp;
	 clrscr();
	 printf("\nEnetr the number");
	 scanf("%d",&n);
	 while(n>0){
	    temp=n%10;
	    printf("%d",temp);
	    n=n/10; //h/=10;
	    }
	    getch();
	    }