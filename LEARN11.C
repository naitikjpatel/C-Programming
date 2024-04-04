//simple calucaltor
#include<stdio.h>
#include<conio.h>
void main(){
      int a,b,c,choice;
      clrscr();

      printf("\n1........addition");
      printf("\n2........substarction");
      printf("\n3........multiplication");
       printf("\nEnter the two number");
      scanf("%d%d",&a,&b);
      printf("\nEnetr the choice");
      scanf("%d",&choice);
      switch(choice){
	   case 1: c=a+b;
		   printf("\nTHE SUM IS %d",c);
		   break;
	   case 2:  c=a-b;
		   printf("\nThe substrection is %d",c);
		   break;
	   case 3: c=a*b;
		   printf("\nThe multiplication is %d",c);
		   break;
	    default: printf("\ninvalide choice");
	    }
	    getch();
	    }