/*     objective : calculat area of  reactangle
	author : naitik patel


  */
#include<stdio.h>
#include<conio.h>
void main(){
	    float length ,breadth,area;
	    clrscr();
	    printf("\nEnter length of rectangle ");
	    scanf("%f",&length);
	    printf("\nEnetr breadth of rectangle");
	    scanf("%f",&breadth);

	    area = length *breadth;
	    printf("\nArea of ractangle is %f",area);
	    getch();


    } // end if main