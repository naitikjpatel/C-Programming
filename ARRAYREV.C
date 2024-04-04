/*   author: naitik pael
      objective: reverse the elemets of an 1D arra in c
*/
#include<stdio.h>
#include<conio.h>
void main(){
	 int a[10];
	 int i,temp,j;
	 clrscr();
	 for(i=0;i<10;i++){
	    scanf("%d",&a[i]);
	 }
	 printf("\nBefore reverse value of array");
	 for(i=0;i<10;i++){
	      printf("%d",a[i]);
	 }
	 for(i=0,j=9;i<j;i++,j--){
		   temp=a[i];
		   a[i]=a[j];
		   a[j]=temp;
	 }
	 printf("\nReverse array");
	 for(i=0;i<10;i++){
		printf("\n%d  ",a[i]);
	   }
	   getch();
	   }//end of main