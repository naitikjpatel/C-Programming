#include<stdio.h>
#include<conio.h>
void main(){
	    char gander;
	    clrscr();
	    printf("\nEnter gander(M/m or F/f):");
	    scanf("%c",&gander);
	    switch(gander){
		 case 'M':
		 case 'm':
			  printf("\nMale");
			  break;
		 case 'F':
		 case 'f':
			  printf("\Female");
			  break;
		 default: printf("invalide choice");
		 }


		 getch();
		 }// end of main

