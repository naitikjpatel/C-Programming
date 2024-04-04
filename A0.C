/*   arithmetic operator
      make simple calculator
*/
#include<stdio.h>
#include<stdio.h>
void main(){
	int a,b,add,sub,multi,div,modulo;
	clrscr();
	printf("\nEnter the value of a");
	scanf("%d",&a);
	printf("\nEnter the value of b");
	scanf("%d",&b);
	add=a+b;
	sub=a-b;
	multi=a*b;
	div=a/b;
	modulo=a%2;
	printf("\nThe addition is %d",add);
	printf("\nThe substraction is %d",sub);
	printf("\nthe multiplication is %d",multi);
	printf("\nThe division is %d",div);
	printf("\nThe modular is %d",modulo);
	getch();
	}//end of main