/*   author: naitik patel
    objective:swap two number by call by raferance
*/
#include<stdio.h>
#include<conio.h>
void swap(int *x,int *y);  //function declaration or prototype
void main(){
	 int a,b;
	 clrscr();
	 printf("\nEnter the two different value");
	 scanf("%d%d",&a,&b);
	 printf("\nBefore the swap value of a&b is %d & %d",a,b);
	 swap(&a,&b);
	 printf("\nBefore the swap value of a&b is %d & %d",a,b);
	 getch();
}
void swap(int *x,int *y){
	int z;
	z=*x;
	*x=*y;
	*y=z;


}