/*     author : naitik patel
	objective:
*/
#include<stdio.h>
#include<conio.h>
void main(){
	   int arr[5];
	   int i;
	   int even=0,odd=0;
	   for(i=0;i<5;i++){
	       scanf("%d",&arr[i]);
	       if(arr[i]%2==0){
		  even++;
	       }else{
		  odd++;
	      }//end of if -else
	   }//end of for loop
	 printf("\nEven number is %d  & Odd number is %d",even,odd);
	 getch();
	 }//end of main