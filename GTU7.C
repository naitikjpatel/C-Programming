/*           author: naitik patel
	     objevctive:write a c program to find out distance travelled
			by the equation d=ut+at^2  or ut +1/2at^2
*/
#include<stdio.h>
#include<conio.h>
void main(){
	 float a,u,d;
	 int t;
	 clrscr();
	 printf("\nEnter the value of a");
	 scanf("%f",&a);
	 printf("\nEnter the value of u");
	 scanf("%f",&u);
	 printf("\nEnter the value of time t");
	 scanf("%d",&t);
	 d=u*t+(a*t*t)/2;
	 printf("\nThe distance is %.2f",d);
	 getch();
	 }//end of main