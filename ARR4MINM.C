/*      author: naitik patel
	objective : to write a program to find minimum and maximum
		    number find in 1D array
*/
#include<stdio.h>
#include<conio.h>
void main(){
	  int arr[5];
	  int i;
	  int min,max;
	  clrscr();
	  for(i=0;i<5;i++){
		 scanf("%d",&arr[i]);
	   }//end of for loop
	   min=max=arr[0];
	   /* first elements mean arr[0] e potana mate min and max number j che*/
	   for(i=1;i<5;i++){
		 if(arr[i]<min)
		      min=arr[i];
		 if(arr[i]>max)
		      max=arr[i];
		  //end of if -else
	     }//en dof main
	     printf("\nmax number is %d & min number is %d",max,min);
	     getch();
	     }//end of main


