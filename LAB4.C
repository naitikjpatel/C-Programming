/*        Authpr : naitik patel
	  objective :write a progarm to read marks of a student and decide
	  a pass and fail
*/
#include<stdio.h>
#include<conio.h>
void main(){
	  int marks;
	  clrscr();
	  printf("\nEnetr the marks 0 to 70:");
	  scanf("%d",&marks);

	  if(marks>=23){
	     printf("\npass");
	     }else{
	       printf("\nfail");
	       }
	       getch();
	       }//end of main

