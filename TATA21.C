/*         author : naitik patel
	   objective:program to print fibonacci series up to 100
*/
#include<stdio.h>
#include<conio.h>
void main(){
	int a=1,b=1,c=0,i;
	clrscr();
	printf("%d\t%d\t",a,b);
	for(i=0;i<=10;i++)
	{
	  c=a+b;
	  if(c<100){
	     printf("%d\t",c);
	     }//end of if
	 a=b;
	 b=c;
	 }//end of for
	getch();
	}