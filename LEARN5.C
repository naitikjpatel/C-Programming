//three diffresnt and find largest number
#include<stdio.h>
#include<conio.h>
void main(){
      int a,b,c;
      clrscr();
      printf("\nEnter the three number");
      scanf("%d%d%d",&a,&b,&c);
      if(a>b){
	 if(a>c){
	      printf("\na is biggest");
	 }else{
	     printf("\n c is biggest");
	 }
      }else{
	  if(b>c){
	      printf("\nb is biggest");
	  }else{
	      printf("\nc is biggest");
	  }
      }
      getch();
      }
