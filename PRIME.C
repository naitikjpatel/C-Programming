/*                 author:naitik patel
		   objective:to find out the prime number

*/
#include<stdio.h>
#include<conio.h>
void mian(){
	   int n,i,prime=0;
	   clrscr();
	   printf("\nEnter the value of n");
	   scanf("%d",&n);
	   if(n==2){
		 printf("\nThis is a prime number %d",n);
		 getch();
		 exit(0);
		 }
	   for(i=2;i<n;i++)
	      {
		  if(n%i==0){
			prime=0;
			break;
		      }else{
			 prime=1;
			 }

	     }

	       if(prime==1){
		   printf("\n%d is a prime number",n);
		  }else{
		     printf("\n%d is not a prime number",n);
		     }

		getch();


	 }