/*                Author: naitik patel
		  objective: to learn a file program
*/
#include<stdio.h>
#include<conio.h>
void main(){

	  FILE*fp;
	  char name[30];
	  char file[30];
	  clrscr();
	  printf("\nEnter the file name with extension:-");
	  gets(file);

	  fp=fopen(file,"w");
	  fprintf(fp,"%s","This is a naitik patel");
	  fclose(fp);

	  fp=fopen(file,"r");
	  fscanf(fp,"%s",&name);
	  printf("%s",name);
	  getch();
      }//end of main