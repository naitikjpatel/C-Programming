/*                    Author:- Naitik patel
       What is string:-- String is collection of character
objective:
	 1)string--->  Reverse
	 2)length--->length mean numbers of charcter
	 3)concat string--->concat mean two ya multipale sting join
	   example--> str1=naitik ,str2=patel
	     concat str=naitikpatel
	 4)cnocatnation
 */
#include<stdio.h>
#include<conio.h>
void main(){
       char name1[30];//string
       char ch;
       int i=0,len;
       clrscr();
       printf("\nEnetr the string:");
       gets(name);//gets using a string scan .
       printf("\nThe string before reverse: %s",name);
       strrev(name);
       printf("\nThe string after reverse is: %s",name);
       len=strlen(name);
       printf("\nThe length of string is %d",len);
       getch();
       }//end of main