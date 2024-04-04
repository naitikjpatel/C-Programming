//check small and captial latter
#include<stdio.h>
#include<conio.h>
void main(){
	  char a;
	  clrscr();
	  printf("\nEnetr the charcater");
	  scanf("%c",&a);
	  if(a>='A' && a<='Z'){
	    printf("\nEnetr the chaccter is capital case");
	  }else{
	     printf("\nEnetr the chaccter is small case");
	   }
	   getch();
	   }//end of main