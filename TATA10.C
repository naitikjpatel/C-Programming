/*    objective:write a program for find the gratest in 3 numbers
*/
#include<stdio.h>
#include<conio.h>
void main(){
      int a,b,c;
      clrscr();
      printf("\nenter value of a,b&c:");
      scanf("%d%d%d",&a,&b,&c);
      if((a>b)&&(a>c)){
	 printf("\n%d is gratest",a);
      }else if((b>c)&&(b>a)){
	 printf("\n%d is gratest",b);
      }else if((c>a)&&(c>b)){
	 printf("\n%d is gratest",c);
      }else{
	 printf("\nall are equval");
      }
      getch();
 }//end of main