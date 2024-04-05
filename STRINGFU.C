/*                  Author-: Naitik patel
		    objective: to create a program using the string function
*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
	  char str1[30];
	  char str2[30];
	  int choice,n,len;
	  clrscr();
	  printf("\nEnetr the 1st string");
	  gets(str1);
	  printf("\nEnter the 2nd string");
	  gets(str2);
	  while(1){
	     clrscr();
	     printf("\n1-----------reverse");
	     printf("\n2-----------compare");
	     printf("\n3-----------concat");
	     printf("\n4-----------length");
	     printf("\n5-----------uppercase");
	     printf("\n6-----------lowercase");
	     printf("\n0-----------exit");
	     printf("\nEnter the choice:");
	     scanf("%d",&choice);
	     switch(choice){

		     case 1:
			    printf("\The string before reverse is %s",str1);
			    strrev(str1);
			    printf("\nThe string after reverse is %s",str1);
			    break;
		     case 2:
			    n=strcmp(str1,str2);
			    if(n==0){
				 printf("\n%s and %s are equal",str1,str2);
			    }else{
				 printf("\n%s and %s are not equal",str1,str2);
				 }
			    break;
		     case 3:
			    strcat(str1,str2);
			    printf("\n%s is the concayed string",str1);
			    break;
		     case 4:
			    len=strlen(str1);
			    printf("\nThe length of str1 %s is %d",str1,len);
			    break;
		     case 5:
			    strupr(str1);
		     printf("\nThe upper case of the string is %s",str1);
			    break;
		     case 6:
			    strlwr(str1);
			    printf("\nThe lower case is str1 %s",str1);
			    break;
		     case 0:
			     exit(0);
		     default :
			     printf("\nInvalide choice:");

		     }//end of switch
	      getch();
	      }//end of while
  }//end of main

