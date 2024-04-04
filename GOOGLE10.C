/*  objective : print ascii value
    author: naitik patel


  */
#include<stdio.h>
#include<conio.h>
void main(){

	   char ch;
	   clrscr();
	   printf("\nEnter the character ");
	   scanf("%c",&ch);   //read character input

	   // %d display the integer valu ofa character
	   // %c dispaly the actual charcater
	   printf("\nASCII value of %c=%d",ch,ch);
	   getch();
  }// end of main