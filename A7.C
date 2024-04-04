/*   calculat average 3 number
*/
#include<stdio.h>
#include<conio.h>
void main(){
     int a,b,c;
     float avg;
     clrscr();
     printf("\nEneter three number");
     scanf("%d%d%d",&a,&b,&c);

     avg=(a+b+c)/3;
     printf("\nthe average value is %0.2f",avg);
     getch();
     }//end of main