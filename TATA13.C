/*    objective :write a program for odd and even number
*/
#include<stdio.h>
#include<conio.h>
void main(){
       int num;
       clrscr();

       printf("\nEnter the any number:");
       scanf("%d",&num);

       if(num%2==0){
	    printf("\nThe number is even");
       }else{
	    printf("\nThe number is odd");
       }


       getch();
    }//end of main