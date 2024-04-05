#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
	char name1[30];
	char name2[30];
	int len,i,j;
	clrscr();
	printf("\nEnter the value of name");
	gets(name1);
	len=strlen(name1);
	for(i=len-1,j=0;i>=0;i--,j++){
		  name2[j]=name1[i];

		  }     //end of for loop
	  name2[j]='\0';   //null
	  printf("\nThe reverse of the string %s is %s",name1,name2);
	  getch();
	  }//end of main
