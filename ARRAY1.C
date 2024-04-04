/*     author: naitik patel
       objective : 2d array program print and scan
*/
#include<stdio.h>
#include<conio.h>
void main(){
       int arr[3][3],i,j;
       clrscr();
       printf("\nEnetr the elements of the matrix:");
       //this nested for loop is array scan
       for(i=0;i<3;i++){
	   for(j=0;j<3;j++){
		scanf("%d",&arr[i][j]);
	   }//end of inner for loop
       }//end of outter loop
       //this nested for loop is arary print on consolt
       for(i=0;i<3;i++){
	    for(j=0;j<3;j++){
		 printf("%d",arr[i][j]);
	     }//end of inner for loop
	     printf("\n");
       }//end of outer for loop
     getch();
     }//end of main
