#define PI 3.14
#include<stdio.h>
#include<conio.h>
void main(){
     int l,a;
     float r,b;
     clrscr();
     printf("\nEnter the value of a and r");
     scanf("%d%f",&l,&r);
     a=l*l;
     b=PI*r*r;
     printf("\nsquare area is %d",a);
     printf("\ncircle area is %f",b);
     getch();
     }//end of main