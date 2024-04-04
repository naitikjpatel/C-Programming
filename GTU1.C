/*        objective : simple calculator
*/
#include<stdio.h>
#include<conio.h>
void main(){
	 int a,b,choice,sum,multi,sub;
	 float div;
	 while(1){
	 clrscr();
	 printf("\nEnter the value of a&b:");
	 scanf("%d%d",&a,&b);
	 printf("\n1.........addition");
	 printf("\n2.........substraction");
	 printf("\n3.........multiplication");
	 printf("\n4.........division");
	 printf("\n0.........exist");
	 switch(choice){
		 case 1:
			 sum=a+b;
			 printf("\nThe addition is %d",sum);
			 break;
		 case 2:
			sub=a-b;
			printf("\nThe substraction is %d",sub);
			break;
		 case 3:
			multi=a*b;
			printf("\nthe multiplication is %d",multi);
			break;
		 case 4:
			div=a/b;
			printf("\nThe division is %.2f",div);
			break;
		 case 0:
		       exist(0);
		 default:
			printf("\nInvalide choice");
		 }//end of switch
       }//end of while
    getch();
    }//end of main