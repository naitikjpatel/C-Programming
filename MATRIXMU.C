/*    author: naitik patel
      objective : matrix multiplication

*/
#include<stdio.h>
#include<conio.h>
void main(){
       int a[3][3],b[3][3],i,j,k,c[3][3];
       clrscr();
       printf("\nEnetr the elements of the first matrix");
       for(i=0;i<3;i++){
	   for(j=0;j<3;j++){
	       scanf("%d",&a[i][j]);
	   }//end of inner for lop
       }//end of oter for loop
       printf("\n");

       printf("\nenetr the elements of the second matrix");
       for(i=0;i<3;i++){
	   for(j=0;j<3;j++){
	     scanf("%d",&b[i][j]);
	   }//end of inner for loop
	}//end of outter for loop
	printf("\n");

	printf("output: \n");
	for(i=0;i<3;i++){
	   for(j=0;j<3;j++){

