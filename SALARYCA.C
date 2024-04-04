/*
      salary :
	    basic salary
	    house rental allowance(HRA)
	    daily allowance(DA)
     Gross salary =basic salary+hra+da
     take basic salary form user:
       3 condition
       basic salary<=10000 HRA : 20%  ,DA :80%
	  gross salary=basic salary+(basic salry*0.20)+(basic sa;ry*0.80)
       basic salary<=20000 HRA :25%  ,DA:85%
	  upper nu formula marvu
       basic salry>20000 HRA:30%,DA:90%
	  upper nu formula marvu

*/
#include<stdio.h>
#include<conio.h>
void main(){
	   int basicsalary;
	   float grosssalary;
	   clrscr();
	   printf("\nEnter the basicsalary :");
	   scanf("%d",&basicsalary);
	   if(grosssalary<=10000){
	      grosssalary=basicsalary+(basicsalary*0.20)+(basicsalary*0.80);
	   }else if(grosssalary<=20000){
	      grosssalary=basicsalary+(basicsalary*0.25)+(basicsalary*0.85);
	   }else{
	      grosssalary=basicsalary+(basicsalary*0.30)+(basicsalary*0.90);
	   }
	   printf("\nGross Salary of Employee is : %0.2f",grosssalary);
	   getch();
} //end of main

