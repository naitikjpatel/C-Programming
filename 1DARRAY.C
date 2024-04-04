/*                      Author:-naitik patel
			obj:-write a c program which perform the following
			    operations on 1D array
1)display of total all values
2)display average of all values
3)count total 0 values
4)count total positive values
5)count total nagative values
6)count total even numbers
7)count total odd numbers
*/

#include<stdio.h>
#include<conio.h>
void main(){
	   int num[30],N,i,sum=0,tz=0,tp=0,tn=0;//tz=total zero
	   int te=0,to=0;
	   float avg;                           //tp=total nagative
	   clrscr();                            //tn=total negative

	   printf("\nHoe many elements of array you want to print:");
	   scanf("%d",&N);

	    //array elements input
	   for(i=0;i<N;i++)                     //scanf value sof array
	   {
		printf("\nEnter value of num[%d]:",i);
		scanf("%d",&num[i]);
	    }
	    //for sum program
	    for(i=0;i<N;i++)
	    {
		  sum=sum+num[i];
		  if(num[i]==0){
			tz++;        //count zero
			} //end of if
		  else if(num[i] > 0){
			 tp++;            //count positive
			 }//end of else if
		  else{
		       tn++;         //count negative
		       }//end of else
		  //odd and even program of code
		  if(num[i]%2==0){
		      te++;  //count even number
		      }else{
			to++; //count odd number
			}
	    }
	      printf("\nThe sum is %d",sum);
	      avg=sum/N;
	      printf("\nThe average is %f",avg);
	      printf("\nThe total zero is %d",tz);
	      printf("\nThe total positive is %d",tp);
	      printf("\nThe total negative is %d",tn);
	      printf("\nThe total even number is %d",te);
	      printf("\nThe total odd number is %d ",to);

	    //Display values of array
	    for(i=0;i<N;i++)
	    {
		printf("\n%d",num[i]);
	    }

	getch();
 }//end of main