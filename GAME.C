/*                          Author:-Naitik Patel
			    DOC:-28/10/2021
			    Objective:-To create a candy game

*/
#include<stdio.h>
#include<conio.h>
void main(){
    int candyX=40,candyY=2,boxX=40,boxY=22;
    char ch;
    textbackground(BLUE);
    start:
    clrscr();
    gotoxy(candyX,candyY);
    cprintf("0");
    gotoxy(boxX,boxY);
    cprintf("#");
    gotoxy(boxX+7,boxY);
    cprintf("#");
    gotoxy(boxX,boxY+1);
    cprintf("########");
    if(kbhit()){
		 ch=getch();
		 switch(ch){
			   case 'a':if(boxX>=7){
					 boxX--;
				       }
				    break;
			   case 'b':if(boxX<=72){
					 boxX++;
				       }
				       break;
			   case 'x':exit(0);

		    }//end of switch

	   }//end of if
	   candyY++;
	   if(candyY==22){
	      sound(70);
	      delay(200);
	      nosound();
	      candyX=rand()%80+1;
	      candyY=2;

	   }
	   delay(200);
	 goto start;
	 getch();

}
