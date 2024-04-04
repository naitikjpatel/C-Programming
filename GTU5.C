/*         author:naitik patel
	   objective :write a cprogram to enter a distance in to kilometer
		    and convert it in to meter ,feet,inches and centimeter
*/
#include<stdio.h>
#include<conio.h>
void main(){
	  int km;
	  float m,inch,feet,cm;
	  clrscr();
	  printf("\nEnter the km ");
	  scanf("%d",&km);
	  m=km*1000;
	  feet=km*10.079;
	  inch=km*39370.079;
	  cm=km*100000;
	  printf("\nin meter is %.2f",m);
	  printf("\nin feet is %.2f",feet);
	  printf("\nin inch is %.2f",inch);
	  printf("\nin cm is %.2f",cm);
	  getch();
	  }//end of main