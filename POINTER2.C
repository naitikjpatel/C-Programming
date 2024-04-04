/*       Author; naitik patel
	 objective: write a program for pointer
*/
#include<stdio.h>
#include<conio.h>
void main(){
       int x=9,y=8,z=0;
       int *p,*q,*r;
       p=&x;
       q=&y;
       r=&z;
       clrscr();
       *r=*p+*q;
       printf("\nthe value of r is %d------%d------%u",*r,z,r);
       getch();
   }//end of main