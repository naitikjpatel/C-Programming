#include<stdio.h>
#include<conio.h>
void main(){
       float u,a,d;
       int t;
       clrscr();
       printf("\nEnter the value of a:");
       scanf("%f",&a);
       printf("\nEnetr the value of u:");
       scanf("%f",&u);
       printf("\nEnetr the value of t:");
       scanf("%d",&t);

       d=(u*t) + (a*t*t)/2;
       printf("\nthe distance is %.2f",d);
       getch();
       }//end of main