// c program to print all even numbers from 1 to n
#include<stdio.h>
#include<conio.h>
void main(){
	int i,n;
	clrscr();
	//input upper limit of even number from user
	printf("\nPrint all even numbers till :");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
	   // check even condition before printing
	   if(i%2==0){
		 printf("%d\n",i);
		 }//end of if

	      }//end of for
	getch();
	}//end of main