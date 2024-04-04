/*  Author: naitik patel
    objective:enter marks and show result student is pass and fail
*/
#include<stdio.h>
#include<conio.h>
void main(){
	int mark;
	clrscr();
	printf("\nEnter the marks");
	scanf("%d",&mark);
	if(mark>=35){
	  printf("\nPASS");
	}else{
	  printf("\nFail");
	}
	getch();
	}//end of main
