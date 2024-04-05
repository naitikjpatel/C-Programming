#include<stdio.h>
#include<conio.h>
void main(){
	   int num1,num2,add,sub,multi,choice;
	   float div;
	   clrscr();
	   printf("\nEnter the value of num1 & num2:");
	   scanf("%d%d",&num1,&num2);

	   printf("\n1---------addition");
	   printf("\n2---------subtraction");
	   printf("\n3---------multiplication");
	   printf("\n4---------division");
	   printf("\n0---------exit");
	   printf("\nEnter the choice");
	   switch(choice){

			case 1:
				add=num1+num2;
				printf("\nthe addition is %d",add);
				break;
			case 2:
				sub=num1-num2;
				printf("\nthe subtraction is %d",sub);
				break;
			case 3:
				multi=num1*num2;
				printf("\nthe multiplication is %d",multi);
				break;
			case 4:
				div=num1/num2;
				printf("\nthe division is %f",div);
				break;
		       case 0:
				exit(0);
		       default:
			       printf("\nInvalide choice");
		     }//end of switch


      getch();
   }//end of mian
