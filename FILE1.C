//topic is file
#include<stdio.h>
#include<conio.h>
void main(){
	FILE *fp;
	char name[30];
	char newname[30];
	clrscr();
	printf("\nEnter the file name");
	gets(name);
	fp=fopen(name,"w");
	fprintf(fp,"%s","INDIA");
	fclose(fp);
	fp=fopen(name,"r");
	fscanf(fp,"%s",newname);
	printf("\The newnameis %s",newname);
	fclose(fp);

	getch();
}