#include<stdio.h>
#include<conio.h>
void main(){
	FILE *fp;
	char name[30];
	char newname[30];
	char ch;
	clrscr();
	printf("\nEnter the name of the file");
	gets(name);
	fp=fopen(name,"w");
	while((ch=getchar())!='\n'){
	       putc(ch,fp);
	}
	fclose(fp);
	fp=fopen(name,"r");
	printf("\nThe contants of the file");
	while((ch=getc(fp))!=EOF){
	    printf("%c",ch);
	}
	getch();
}