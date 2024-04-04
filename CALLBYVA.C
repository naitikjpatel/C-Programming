/*           author: naitik patel
	     obejective:swapping two values using call by value
*/
#include<stdio.h>
#include<conio.h>
void swap(int,int);
void main(){
	   int a,b;
	   clrscr();
	   printf("\nEnter two number");
	   scanf("%d%d",&a,&b);
	   printf("\nBefore swap value a &b is %d&%d:",a,b);
	   swap(a,b);
	   printf("\nAfter swaping value a&b is %d&%d :",a,b);
	   getch();
}
void swap(int x,int y){
	int z;
	z=x;
	x=y;
	y=z;


}