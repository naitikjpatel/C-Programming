/*       swap witout third variable
*/
#include<stdio.h>
#include<conio.h>
void main(){
      int a,b;
      clrscr();
      printf("\nEnter the two values");
      scanf("%d%d",&a,&b);
      a=a+b;
      b=a-b;
      a=a-b;
      printf("\n a is %d \t b is %d",a,b);
      getch();
      }//end of main