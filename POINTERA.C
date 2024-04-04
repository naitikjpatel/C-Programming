/*  objective: pointer
*/
#include<stdio.h>
#include<conio.h>
void main(){
       int x,y,*a,*b,add;
       clrscr();
       *a=&x;
       *b=&y;
       printf("\nEnetr the two different value");
       scanf("%d%d",&*a,&*b);
       add=*a+*b;
       printf("\nThe addition is %d",add);
       getch();
       }//end of main