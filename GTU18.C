/*        Author:naitik patel
	  objective: write a prpgram for reverse number
*/
#include<stdio.h>
#include<conio.h>
void main(){
	  int num,rev=0,lastNum;
	  clrscr();
	  printf("\nEnetr any number");
	  scanf("%d",&num);

	  //logic of the reverse number conversion
	  while(num>0)
	  {
	       lastNum=num % 10;
	       rev=(rev * 10) + lastNum;
	       num=num / 10;
	  }//end of while loop
	  printf("\nReversed number is : %d",rev);
	  getch();
	  }//end of main