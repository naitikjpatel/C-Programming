/*          Author : naitik patel
	    objective : program to shoe sum of 10 elements
			of array & show the average
*/
#include<stdio.h>
#include<conio.h>
void main(){
	 int a[5],i,sum=0;
	 float avg;
	 clrscr();
	 printf("\nEnter element of array");
	 for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	 }
	 for(i=0;i<5;i++){
		sum=sum+a[i];
	 }
	printf("\nsum=%d",sum);
	avg=sum/10;
	printf("\naverage =%0.2f",avg);
	getch();
  }//end of main
