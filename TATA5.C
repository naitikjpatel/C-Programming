/*              Author : naitik patel
		objective : enter five sunbject marks and percentage
*/
#include<stdio.h>
#include<conio.h>
void main(){
	int s1,s2,s3,s4,s5,sum,total=0;
	float per;
	clrscr();
	printf("\nEnter the five subject marks:");
	scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
	sum=s1+s2+s3+s4+s5;
	printf("\nsum =%d",sum);
	per=(sum*100)/total;
	printf("\npercentage is %.2f",per);
	getch();
	}//end of main
