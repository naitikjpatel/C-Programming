// c program to print multiplication table of a given number
#include<stdio.h>
#include<conio.h>
void main(){
      int i,num;
      clrscr();
      printf("\nEnetr numbrt to print table:");
      scanf("%d",&num);

      for(i=1;i<=10;i++)
      {
	  printf("%d * %d = %d\n",num,i,(num*i));
      }

      getch();
      }//end of main