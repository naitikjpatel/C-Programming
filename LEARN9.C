#include<stdio.h>
#include<conio.h>
void main()
{

int n,i,sum=0;
clrscr();
printf("enter the upper limit: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
  if(i%2!=0){
    sum+=i;    //sum=sum+i
    }
}
printf("the sum of first n odd numbers %d",sum);
getch();
}