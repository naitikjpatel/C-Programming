/*write a c program which perform the following operations on 1D array
1)Displays Total of all values
2)Displays Average of all values
3)count total 0 values
4)count total positive number
5)count total negative number
6)count total even number
7)count total odd number
*/
#include<stdio.h>
#include<conio.h>
void main(){
	   int num[30],N,i,total;
	   float Avg;
	   clrscr();

	   printf("\nHow many elements of array you want to input :");
	   scanf("%d",&N);
	   // scan values of arrays
	   for(i=0;i<N;i++){
		     printf("\nEnter values of array:");
		     scanf("%d",&num[i]);
		     }
	  //Display values of array
	  for(i=0;i<N;i++){
		    printf("\n%d",&num[i]);
		    }

	  getch();
	  }
