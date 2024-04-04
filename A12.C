/*           relational operator
*/
#include<stdio.h>
#include<conio.h>
void main(){
	 int a,b,c;
	 clrscr();
	 printf("\nEnter the two values");
	 scanf("%d%d",&a,&b);
	 c=a<b;
	 printf("\n%d<%d=%d",a,b,c);
	 c=a<=b;
	 printf("\n%d<=%d=%d",a,b,c);
	 c=a>b;
	 printf("\n%d>%d=%d",a,b,c);
	 c=a>=b;
	 printf("\n%d>=%d=%d",a,b,c);
	 c=a==b;
	 printf("\n%d==%d=%d",a,b,c);

	 c=a!=b;
	 printf("\n%d!=%d=%d",a,b,c);getch();
	 }
