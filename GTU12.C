/*         Author: naitik patel
	   objective:mark and give grade
*/
#include<stdio.h>
#include<conio.h>
void main(){
	   int sub1,sub2,sub3,total;
	   float per;
	   clrscr();
	   printf("\nEnter the sub 1 mark");
	   scanf("%d",&sub1);
	   printf("\nEnter the sub 2 mark");
	   scanf("%d",&sub2);
	   printf("\nEnter the sub 3 mark");
	   scanf("%d",&sub3);
	   total=sub1+sub2+sub3;
	   per=total/3;
	   printf("\nTotal marks is %d",total);
	   printf("\nPer is %.2f",per);
	   if(per>=80&&per<=100){
		  printf("\nDistinction");
	   }else if(per>=60&&per<=79){
		  printf("\nfirst class");
	   }else if(per>=40&&per<=59){
		  printf("\nsecond class");
	   }else{
		 printf("\nfail");
	   }
	   getch();
	}//end of main