/*          Author : naitik patel
	    Objective:study for pointer
*/
#include<stdio.h>
#include<conio.h>
void main(){
	  int x=9;
	  float y=2.5;
	  char ch='A';
	  int *z; // pointer ne lakhavani rit *z
	  float *p;
	  char *q;
	  z=&x;
	  p=&y;
	  q=&ch;
	  clrscr();
	  printf("\n%d-------%u",*z,z);
	  printf("\n%d-------%u",*p,p);
	  printf("\n%d-------%u",*q,q);
	  getch();
   }//end of main