/*        author : naitik patel
	  objective : program to find wheather given number
	  is a prime number or not
*/
#include<stdio.h>
#include<conio.h>
void main(){
	int i,n,r=0;
	clrscr();
	printf("\nEnter any number:");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
	    if(n%i==0)
	    {
		r=1;
		break;
	    }
	}//end of for loop
	    if(r==0)
	    {
		printf("\nprime no");
	    }else{
		printf("\nnot prime");
	    }

	    getch();
  }//end of main