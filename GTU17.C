/*          author: naitik patel
	    objective: write a c program to find a factorial number

*/
#include<stdio.h>
#include<conio.h>
void main(){
	 int no,fact=1,i;
	 clrscr();
	 printf("\nEnter the number");
	 scanf("%d",&no);
	 if(no<0){
	     printf("\n error| factorial of a negative is not possible ");
	 }else{
	       for(i=1;i<=no;i++){
		     fact=fact*i;
		}//end of for
	   printf("\nfactorail value is %d",fact);
	}//end of else
	   getch();
       }//end of main