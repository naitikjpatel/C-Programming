/*    putw & getw -->putw & getw is  use for a only number
*/

#include<stdio.h>
#include<conio.h>
void main(){
	FILE *fp1,*fp2;
	int num,i;
	int ch;
	clrscr();
	fp1=fopen("even.txt","w");
	fp2=fopen("odd.txt","w");

	for(i=0;i<5;i++){
	   printf("\nEnter the numbers");
	   scanf("%d",&num);
	   if(num%2==0){
	      putw(num,fp1);
	   }else{
	      putw(num,fp2);
	   }
       }//end of for loop
	getch();
}