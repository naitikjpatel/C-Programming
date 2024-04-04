#include<stdio.h>
#include<conio.h>
void main(){
	   int x,y;
	   clrscr();
	   printf("\nEnter the value of x and y");
	   scanf("%d%d",&x,&y);
	   if(x%2==0 && y%2==0){
		printf("\n Both number are even",x,y);   //even=beki
	    }else if(x%2==0 && y%2!=0){
		printf("\n%d is even and %d is odd number",x,y);
	    }else if(x%2!=0 && y%2==0){
		printf("\n%d is odd and %d is even number",x,y);
	    }else{
		printf("\nBoth number are odd",x,y);     //odd=eki
		}
		getch();

		}//end of main
