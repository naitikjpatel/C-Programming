/*             Author :- naitik patel
	       DOC:-30-12-2021
	       Objective:- write program for enter any number and number digit
		   sum .ex-->3214=3+2+1+4=10
*/
#include<stdio.h>
#include<conio.h>
void main(){
	int num,ans,t1,t2,t3,t4;
	clrscr();
	printf("\nEnter four digit number:");
	scanf("%d",&num);

	t1=num%10;
	num=num/10;

	t2=num%10;
	num=num/10;

	t3=num%10;
	num=num/10;

	t4=num%10;  //jetla digit no number hoy tya sudhi modulo(%) levano
		     //ena thi 1 ocho divide(/) karvanp
		     //last  ma divide karvani jarur nathi
       ans =t1+t2+t3+t4;
       printf("\nThe answer is : %d",ans);

       if(ans%2==0){
	  printf("\nThe ans is even number");
	  }
	  else{
	   printf("\nthe sum is odd number");
	   }

       getch();
    }//end of main