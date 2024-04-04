//convert days into months
#include<stdio.h>
#include<conio.h>
void main(){
       int days,month,exday;
       clrscr();
       printf("\nEnetr the days");
       scanf("%d",&days);
       month=days/30;
       exday=days%30;
       printf("\nThe months is %d",month);
       printf("\nThe extra days is %d",exday);
       getch();
       }