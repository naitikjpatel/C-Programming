//simple interest
#include<stdio.h>
#include<conio.h>
void main(){
       float p,r,n,si;
       clrscr();
       printf("\nEnetr the p value,rate value,n value");
       scanf("%f%f%f",&p,&r,&n);
       si=(p*r*n)/100;
       printf("\nThe simple interst is %f",si);
       getch();
       }