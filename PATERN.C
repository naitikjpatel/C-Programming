/*
    to create a parten(reqtenget triengel)
    int i,j;
    clrscr();
    for(i=1;i<=6;i++){
	 for(j=1;j=i;j++1){
	    printf("*");
	    }
	    printf("\n");
	    }
	    getch();
	)
    *
    **
    ***
    ****
    *****
    ******
*/

#include<stdio.h>
#include<conio.h>
void main(){
	   int i,j,n,k,t;  //1st program and second program is in multiline comment

	   char ch;
	   clrscr();
	   printf("\nEnter  the character you want to print");
	   scanf("%c",&ch);
	   printf("\nHow many rows you want");
	   scanf("%d",&n);
	   printf("\nHello naitik how many triangle you want");
	   scanf("%d",&t);    // t for triangle
	   for(k=1;k<=t;k++){
	      for(i=1;i<=n;i++){
		 for(j=1;j<=i;j++){
		 printf("%c",ch);
		 } //end of coloum for loop (j= coloum loop)
		 printf("\n");
		 } //end of rows for loop (i= rows loop)
		 printf("\n");
		 }//end of for loop of triangle (t= triangle)
		 getch();
 } //end of main



