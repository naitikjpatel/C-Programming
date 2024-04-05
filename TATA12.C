/*    objective:write a program for find that entered year
		 is leap year or not
*/
#include<stdio.h>
#include<conio.h>
void main(){
	int year;
	clrscr();
	printf("\nEnter the year:");
	scanf("%d",&year);
	if(year%4==0){
	   printf("\nyear is a leap year:");
	}else{
	   printf("\nyear is a not leap year:");
	}
	getch();
 }//end of main