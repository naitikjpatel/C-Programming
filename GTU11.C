/*         author: naitik patel
	   objective:write a c program to check whether the capital,small digit and special
*/
#include<stdio.h>
#include<conio.h>
void main(){
	  char ch;
	  clrscr();
	  printf("\nEnter any character");
	  scanf("%c",&ch);
	  if(ch>='0'&&ch<='9'){
	       printf("\nThis is a digit");
	  }else if(ch>='A'&&ch<='Z'){
	       printf("\This is capital letter");
	  }else if(ch>='a'&&ch<='z'){
	       printf("\nThis is a small letter");
	  }else{
	       printf("\nThis is a special charcter");
	  }
	  getch();
	  }//end of main