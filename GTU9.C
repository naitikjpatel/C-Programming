/*          Author:naitik patel
	    objective:write a program to read mark and pass and fail
*/
#include<stdio.h>
#include<conio.h>
void main(){
	 int sub1,sub2,sub3,total;
	 float per;
	 clrscr();
	 printf("\nEnter the mark of subject 1:");
	 scanf("%d",&sub1);
	 printf("\nEnter the mark of subject 2:");
	 scanf("%d",&sub2);
	 printf("\nEnter the mark of subject 3:");
	 scanf("%d",&sub3);
	 total=sub1+sub2+sub3;
	 per=total/3;
	 printf("\nTotal is %d",total);
	 printf("\npercentage is %.2f",per);
	 if(per>=33){
		printf("\nAll the best you are pass");
	 }else{
		printf("\nsorry you are fail");
	 }
	 getch();
	 }//end of main