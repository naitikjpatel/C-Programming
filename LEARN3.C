//summmation of three digit
#include<stdio.h>
#include<conio.h>
void main(){
     int n,a,b,c,sum;
     clrscr();
     printf("\nEnetr the three digit");
     scanf("%d",&n);
     a=n/100;
     b=(n/10)%10;
     c=n%10;
     sum=a+b+c;
     printf("\nThe summation us %d",sum);
     getch();
     }
