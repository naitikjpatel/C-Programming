/*    aim : to learn logical operator
*/
#include<stdio.h>
#include<conio.h>
void main(){
	int a,b,c;
	clrscr();
	printf("\nEnter tfhe two values");
	scanf("%d%d",&a,&b);
	c=a<b&&a!=5;
	printf("a<b && a!=5-->%d\n",c);
	c=a>b&&a==5;
	printf("a>b && a==5-->%d\n",c);
	c=a<b||b>=2;
	printf("a<b || b>=2-->%d\n",c);
	c=a>b||a!=5;
	printf("a>b && a>=2-->%d\n",c);
	c=!(a==b);
	printf("!(a==b)-->%d\n",c);
	c=!(a<b || b<=2);
	printf("\n!(a<b || b<=2)-->%d",c);
	getch();
	}