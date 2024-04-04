/*1)displau=ys total all values
  2)display average of all values
  3)count total 0 values
  4)count total positve value
  5)count total negative value
  6)count all odd number
  7)count all even number
*/
#include<stdio.h>
#include<conio.h>
void main(){
       int num[30],n,i,sum=0,tn=0,tp=0,tz=0,te=0,to=0;
       float avg;
       clrscr();
       printf("\nhow many elements of array you want to input");
       scanf("%d",&n);
       //array elements input
       for(i=0;i<n;i++){
	    printf("\nEnter value of num[%d]",i);
	    scanf("%d",&num[i]);
       }
       //array display
       for(i=0;i<n;i++){
	    printf("\n%d",num[i]);
       }
       for(i=0;i<n;i++){
	    sum=sum+i;
	    if(num[i]==0){
		  tz++;
	    }else if(num[i]>0){
		  tp++;
	    }else{
		  tn++;
	    }
	    if(num[i]%2==0){
		   te++;
	    }else{
		  to++;
	    }

       }
       avg=sum/n;
       printf("\nThe sum is %d",sum);
       printf("\nThe ac=verage is %f",avg);
       printf("\nTotal zero is %d",tz);
       printf("\ntotal negative is %d",tn);
       printf("\ntotal positive is %d",tp);
       printf("\nTotal even is %d",te);
       printf("\nTotal odd is %d",to);



       getch();
       }//end of main



