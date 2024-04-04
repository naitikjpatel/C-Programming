//c program to print alphabets from a to z
#include<stdio.h>
#include<conio.h>
void main(){
	 char ch;
	 clrscr();

	 printf("\nAlphabet from  (a to z):");
	 for(ch='a';ch<='z';ch++){
	       printf("%c\n",ch);
	       }//end of for

	   getch();
	   }//end of main