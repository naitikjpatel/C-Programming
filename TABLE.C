#include<stdio.h>
#include<conio.h>
void main(){
	int n,i;
	clrscr();
	printf("\nEnter the number ");
	scanf("%d",&n);
	for(i=1;i<=10;i++){
	  printf("\n %d *%d=%d",n,i,n*i);
	  }
	  getch();

 }