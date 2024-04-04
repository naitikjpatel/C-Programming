/*         author:naitik patel
	   objective:interchang two number
*/
#include<stdio.h>
#include<conio.h>
void main(){
	int a,b,temp;
	clrscr();
	printf("\nEnter any two number");
	scanf("%d%d",&a,&b);
	a=b;
	temp=a;
	b=temp;
	printf("\nThe value of a is %d",a);
	printf("\nThe value of b is %d",b);
	getch();
	}//end of main
