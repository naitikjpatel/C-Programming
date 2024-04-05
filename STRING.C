/*                  Author: Naitik patel
		    objective:
  */
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
	 char str[50];
	 int i,count=0,len;
	 clrscr();
	 printf("\nEnter the str1:");
	 gets(str);

	 //step 1:
	 len=strlen(str);
	 printf("\nSte1 lenth is %d",len);

	 for(i=0;i<=len;i++){
	      if(str[i]=='a' ||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
		 str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
		   count++;
		  }//end of if


	      }//end of main

	   printf("\nVowel number is %d",count);
	   getch();
	   }//end of main

