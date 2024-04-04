//c program to find maximum between two numbers
#include<stdio.h>
#include<conio.h>
void main(){
	 int num1,num2;
	 clrscr();
	 printf("\nEnter any two values:");
	 scanf("%d%d",&num1,&num2);

	 if(num1>num2){
		   printf("\n%d is maximum",num1);
		   }if(num2>num1){
			    printf("\n%d is maximum",num2);
			    }if(num1==num2){
				   printf("\nboth are equal");
				   }
				   getch();
				   }//end of main