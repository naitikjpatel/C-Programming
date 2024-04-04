/*    author : naitik patel
      objective:matrix addition
*/
#include<stdio.h>
#include<conio.h>
void main(){
	  int a[3][3],b[3][3],i,j,result[3][3];
	  clrscr();
	  printf("\nEnter the elements of first matrix");
	  for(i=0;i<3;i++){
	      for(j=0;j<3;j++){
		   scanf("%d",&a[i][j]);
	      }//end of inner for loop
	  }//end of outter for loop
	  printf("\n");
	  printf("\nEnter the elements of second matrix");
	  for(i=0;i<3;i++){
	       for(j=0;j<3;j++){
		    scanf("%d",&b[i][j]);
		}//end of inner for loop
	  }//end of outter for loop

	  printf("\n");
	  for(i=0;i<3;i++){
	     for(j=0;j<3;j++){
		 result[i][j]=a[i][j]+b[i][j];
		 //c=a+b;
		 printf(" %d  ",result[i][j]);
	      }//end of inner for loop
	      printf("\n");
	  }//end of outter for loop
	  getch();
	  }//end of main