/*   calculat average 3 number
*/
#include<stdio.h>
#include<conio.h>
void main(){
     int a,b,c,sum;
     float avg;
     clrscr();
     printf("\nEneter three number");
     scanf("%d%d%d",&a,&b,&c);
     sum=a+b+c;
     avg=sum/3;
     printf("\nthe average value is %0.2f",avg);
     getch();
     }//end of main