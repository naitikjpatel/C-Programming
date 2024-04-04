/*                   author: naitik patel
		     objective: to perform the buuble sort
*/
#include<stdio.h>
#include<conio.h>
void main(){
	 int arr[7],tmp;
	 int i,j;
	 clrscr();
	 for(i=0;i<7;i++){
	      printf("\nenter the value of arr[%d]",i);
	      scanf("%d",&arr[i]);
	   }
	   printf("\nthe array before sorting\n");
	   for(i=0;i<7;i++){
	     printf("%d\t",arr[i]);
	     }

	 for(i=0;i<7;i++){
	       for(j=0;j<6;j++){
		    if(arr[j]>arr[j+1]){
			//swap
			tmp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=tmp;
			}//end of if
		}//end of inner for

		}//end of outer for

	      printf("\nthe array after sorting\n");
	      for(i=0;i<7;i++){
		  printf("%d\t",arr[i]);
	     }
	     getch();

	}