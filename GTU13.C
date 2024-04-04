/*             author : naitik patel
	       objective:write a c program to prepare pay slip using following
			data ;
			da=10%of basic,hra=7.50%of basic,ma=300
			pf=12.50% of basic,gross=basic+da+hra+ma,nt=gross-pf
*/
#include<stdio.h>
#include<conio.h>
void main(){
	 int Ma=300,basic;
	 float Da,Pf,Gross,Hra,Nt;
	 printf("\nEnter your basic salary:");
	 scanf("%d",&basic);
	 Da=0.1*basic;
	 Hra=0.0750*basic;
	 Pf=0.1250*basic;
	 Gross=basic+Da+Hra+Ma;
	 Nt=Gross-Pf;
	 printf("\nYour pay slip is ready..");
	 printf("\n\nDa=%.2f  Hra=%.2f",Da,Hra);
	 printf("\n\nPf=%.2f  Ma=%.i",Pf,Ma);
	 printf("\n\nGross salary is %.2f\n\nNet salary is %.2f",Gross,Nt);
	 getch();
	 }//end of main