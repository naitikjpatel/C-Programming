// c program to check positive negative or zero using switch case

#include<stdio.h>
#include<conio.h>
void main(){
	int num;
	clrscr();

	printf("\nEnter any number:");
	scanf("%d",&num);

	switch(num>0)
	{
	  //num is positive
	    case 1:
		 printf("\n%d is positive number");
		 break;
	    //num is either negative or zero
	    case 0:
		   switch(num<0){
			case 1:
			      printf("\n%d is negative number");
			      break;
			case 0:
			      printf("\n%d is zero number");
			      break;
			      }
			      break;
		     }//end of outer switch
		  getch();
		  }//end of main
