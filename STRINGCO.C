/*          Author:- Naitik Patel
	    objective:- string
	    this program for concation string mean in gujarati
		   ke two ya  multipla string ko join karne ke liye

 conv=cantion

*/
#include<stdio.h>
#include<conio.h>
void main(){
       char name1[30];
       char name2[30];
       int i=0;
       clrscr();
       printf("\nEnetr the first string:");
       gets(name1);
       printf("\nEnetr the second string:");
       gets(name2);
       strcat(name1,name2);
       printf("\nThe concated string is %s",name1);
       getch();

       }//end of main