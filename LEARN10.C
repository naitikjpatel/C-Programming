//find factorial number
#include<stdio.h>
#include<conio.h>
void main(){
      int n,i=1,fact=1;
      clrscr();
      printf("\nEnetr the number you want to find factorial number");
      scanf("%d",&n);
      while(i<=n){
	   fact*=i;
	   i++;
       }
       printf("\nFatorial is %d",fact);
       getch();
       }//end of main
