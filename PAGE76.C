/*   objective :to compare number
*/
#include<stdio.h>
#include<conio.h>
void main(){
       int num1,num2;
       clrscr();
       printf("\nEnter the num1");
       scanf("%d",&num1);
       printf("\nEnter the num2");
       scanf("%d",&num2);
       if(num1==num2){
	   printf("\nBoth are number is equal");

       }else{
	   printf("\nBoth number are not equal");
       }
       getch();
}