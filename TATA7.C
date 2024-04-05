/*  objective:program to reverse a given number
*/
#include<stdio.h>
#include<conio.h>
void main(){
       int num,a,r=0;
       clrscr();
       printf("\nEnter any number you want to reverse:");
       scanf("%d",&num);
       while(num>=1){
	   a=num%10;
	   r=r*10+a;
	   num=num/10;
	   }
       printf("\nreverse=%d",r);
       getch();
       }//end of main