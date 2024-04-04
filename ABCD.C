/*
	 objective:- to  create ABCD


*/
#include<stdio.h>
#include<conio.h>
#include<dos.h>    //<dos.h> file sound mate ni header file che
void main(){
	    int i;
	    char ch='A';//ASCII American Standard Code For Information Interchange
	    clrscr();
	    for(i=0;i<=25;i++){
		    textcolor(i);
		    gotoxy(5,i+1);
		    sound(i+1000);
		    delay(200);
		    nosound();
		    cprintf("%c",ch+i);
		    }
		    getch();


}