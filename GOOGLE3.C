#include<stdio.h>
#include<conio.h>
#define p printf
void main(){
    int a,b,c;
    clrscr();
    p("\nEnter the number 1");
    scanf("%d",&a);
    p("\nEnter teh number 2");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    p("\nafter swapping values");
    p("\nnumber 1:%d",a);
    p("\nnumber 2:%d",b);
    getch();

    }
