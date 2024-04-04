/* c prgram to find sum of digit of a given number
*/
#include<stdio.h>
#include<conio.h>
void main(){
	 int i,sum=0;
	 clrscr();
	 printf("\nEnter the value ");
	 scanf("%d",i);
	 while(i>0){
		sum=sum+i%10;
		i=i/10;

	 }
	 printf("\nThe digit sum is %d",sum);
	 getch();
	 }//end of main