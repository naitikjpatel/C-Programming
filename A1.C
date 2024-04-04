/*       swap using third variable
*/
#include<stdio.h>
#include<conio.h>
void main(){
       int a,b,temp;
       clrscr();
       printf("\nEnter two values");
       scanf("%d%d",&a,&b);
       temp=a;
       a=b;
       b=temp;
       printf("\na is %d \t b is %d",a,b);
       getch();
       }//end of main