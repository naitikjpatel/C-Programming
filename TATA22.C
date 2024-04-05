/*       author : naitik patel
	 objective : program to find factorial of a number
*/
#include<stdio.h>
#include<conio.h>
void main(){
	int n,i,fact=1;
	clrscr();
	printf("\nEnter any number");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
	   fact=fact*i;
	}
	printf("\nfactorial=%d",fact);
	getch();
    }  //end of main