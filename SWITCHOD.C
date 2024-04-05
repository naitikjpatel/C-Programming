// c program to check even or odd number using switch case
#include<stdio.h>
#include<conio.h>
void main(){
	  int num;
	  clrscr();
	  printf("\nEnter any number to check even or odd:");
	  scanf("%d",&num);

	  switch(num%2){
	       //if n%2==0
	       case 0:
		      printf("\nNumber is even");
		      break;
	       //else if n%2==1
	       case 1:
		      printf("\nnumber is odd");
		      break;
		      }//end of switch
		      getch();
		      }//end of main