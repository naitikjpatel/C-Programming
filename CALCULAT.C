/*
		   author :naitik patel
		   doc: 11/11/2021
		   objective : creat the calculator
*/
#include<stdio.h>
#include<conio.h>
#define p printf
void main(){
	 int choice,num1,num2,num3,ans;
	 float num;
	 float ans1;
	 double ans2;
	 clrscr();
	 start:
	 p("\n1-------addition");
	 p("\n2-------subtraction");
	 p("\n3-------division");
	 p("\n4-------modulus");
	 p("\n5-------multiplication");
	 p("\n6-------simple interest");
	 p("\n7-------compound interest");
	 p("\n8-------exponent");
	 p("\n9-------logarithm");
	 p("\n10------sin");
	 p("\n11------cos");
	 p("\n12------tan");
	 p("\n0-------exit");
	 p("\nEnter the choice : ");
	 scanf("%d",&choice);
	 switch(choice){
	      case 1:
		    p("\nEnter the number 1: ");
		    scanf("%d",&num1);
		    p("\nEnter the number 2: ");
		    scanf("%d",&num2);
		    ans =num1+num2;
		    p("Answer is : %d",ans);
		    break;
	      case 2:
		    p("\nEnter the number 1: ");
		    scanf("%d",&num1);
		    p("\nEnter the number 2: ");
		    scanf("%d",&num2);
		    ans =num1-num2;
		    p("Answer is : %d",ans);
		    break;
	      case 3:
		    p("\nEnter the number 1: ");
		    scanf("%d",&num1);
		    p("\nEnter the number 2: ");
		    scanf("%d",&num2);
		    ans =num1/num2;
		    p("Answer is : %d",ans);
		    break;
	      case 4:
		    p("\nEnter the number 1: ");
		    scanf("%d",&num1);
		    p("\nEnter the number 2: ");
		    scanf("%d",&num2);
		    ans =num1%num2;
		    p("Answer is : %d",ans);
		    break;
	      case 5:
		    p("\nEnter the number 1: ");
		    scanf("%d",&num1);
		    p("\nEnter the number 2: ");
		    scanf("%d",&num2);
		    ans =num1*num2;
		    p("Answer is : %d",ans);
		    break;
	      case 6:
		    p("\nEnter the principle amount : ");
		    scanf("%d",&num1);
		    p("\nEnter the interest rate : ");
		    scanf("%d",&num2);
		    p("\nEnter the time period : ");
		    scanf("%d",&num3);
		    ans1 = (float)(num1*num2*num3)/100;
		    p("\nAnswer is : %.2f",ans1);
		    break;
	     case 7:
		    p("\nEnter the principle amount : ");
		    scanf("%d",&num1);
		    p("\nEnter the interest rate : ");
		    scanf("%d",&num2);
		    p("\nEnter the time period : ");
		    scanf("%d ",&num3);
		    ans2 = num1 * pow ((1 + (num2/100)), num3);
		    p("\nAnswer is : %lf",ans2);
		    break;
	     case 8:
		    p("\nEnter the base : ");
		    scanf("%d",&num1);
		    p("\nEnter the power : ");
		    scanf("%d",&num2);
		    ans2 =pow(num1,num2);
		    p("\nAnswer is %0.2lf",ans2);
		    break;
	     case 9:
		    p("\nEnter the value : ");
		    scanf("%d",&num1);
		    ans2 = log(num1);
		    p("\nanswer is %0.2lf",ans2);
		    break;
	     case 10:
		    p("\nEnter the angle valvu (in degree) : ");
		    scanf("%f",&num);
		    ans2= sin((3.14/180)*num);
		    p("\nanswer is %.2lf",ans2);
		    break;
	     case 11:
		    p("\nEnter the angle valvu (in degree) : ");
		    scanf("%f",&num);
		    ans2= cos((3.14/180)*num);
		    p("\nanswer is %.2lf",ans2);
		    break;
	     case 12:
		    p("\nEnter the angle valvu (in degree) : ");
		    scanf("%f",&num);
		    ans2= tan((3.14/180)*num);
		    p("\nanswer is %.2lf",ans2);
		    break;
	     case 0:
		    exit(0);
	     default:
		  break;
	     }        //end of switch
	     goto start;
	     getch();
    } // end of main


