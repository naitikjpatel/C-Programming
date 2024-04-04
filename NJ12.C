#include<stdio.h>
#include<conio.h>
void main(){
      int a,b,c;
      clrscr();
      printf("\nEnetr the three number");
      scanf("%d%d%d",&a,&b,&c);
      if(a>b){
	    if(a>c){
		printf("\n%d is max",a);
	     }else{
		 printf("\n%d is max",c);
	      }
       }else{
	      if(b>c){
		printf("\n%d is max",b);
	      }else{
		printf("\n%d is max",c);
	      }
	      }
	      getch();
	      }//end of main