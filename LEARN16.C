//1d array
#include<stdio.h>
#include<conio.h>
void main(){
       int arr[10],i;
       clrscr();
       //this for loop is sacn the array
       printf("\nEnter the array elements");
       for(i=0;i<10;i++){
	     scanf("%d",&arr[i]);
       }
       //this for loop is print the array
       printf("\nThe array elements is ");
       for(i=0;i<10;i++){
	  if(i%2==0){
	       printf("\n%d",arr[i]);
	  }else{
	       printf("\n%d",arr[i]);
	       }
	}
	getch();
	}//end of main