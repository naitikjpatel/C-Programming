/*     count year,monthe ,day from days
*/
#include<stdio.h>
#include<conio.h>
void main()
{
     int days,years,months;
     clrscr();
     printf("\nEnter the days");
     scanf("%d",&days);
     /* days=400
     years=400/365=1
     days=400%365=35
     months=35/30=1
     days=35%30=5

     days=500
     years=500/365=1
     days=500%365=135
     months=days/30=135/30=4
     days=135%30=15
     */
     years=days/365;
     days=days%365;
     months=days/30;
     days=days%30;
     printf("\nyear is %d",years);
     printf("\nmonths is %d",months);
     printf("\ndays is %d",days);
     getch();
     }//end of main