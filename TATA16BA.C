/*    objective:write a program for simple calculator  using switch case
*/
#include<stdio.h>
#include<conio.h>
void main(){
	int a,b,sum,sub,mult,choice;
	float div;
	clrscr();
	printf("\nenter the value of a & b:");
	scanf("%d%d",&a,&b);
	printf("\n1...........addition:");
	printf("\n2...........subtraction:");
	printf("\n3...........multiplication:");
	printf("\n4...........division:");
	printf("\n0...........exit:");
	printf("\nEnter the choice");
	switch(choice)
	{
	     case 1:
		    sum=a+b;
		    printf("\nThe addition is %d",sum);
		    break;
	     case 2:
		    sub=a-b;
		    printf("\nThe subtraction is %d",sub);
		    break;
	     case 3:
		    mult=a*b;
		    printf("\nThe multiplication is %d",mult);
		    break;
	     case 4:
		    div=a/b;
		    printf("\nThe division is %f",div);
		    break;
	     case 0:
		    exit(0);
	     default :
		    printf("\ninvalide choice");
	   }//end of switch
      getch();
   }//end of main