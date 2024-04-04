/*                          Author:-Naitik Patel
			    DOC:-28/10/2021
			    Objective:-To create a candy game

*/
#include<stdio.h>
#include<conio.h>
void main(){
    int candyX=40,candyY=2,boxX=40,boxY=22,score=0,life=3,d;
    char ch;
    textbackground(BLUE);
    start:
    clrscr();
    gotoxy(candyX,candyY);
    textcolor(YELLOW);
    cprintf("0");
    gotoxy(60,5);
    cprintf("score=%i",score);
    gotoxy(60,6);
    cprintf("life=%i",life);
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
			   case 'd':if(boxX<=72){
					 boxX++;
				       }
				       break;
			   case 'x':exit(0);

		    }//end of switch

	   }//end of if
	   candyY++;
	   if(candyY==22){
	      d=candyX-boxX;
	      if(d==1 || d==2 || d==3 || d==4 || d==5 || d==6 ){
	      sound(70);
	      delay(200);
	      nosound();
	      score++;
	      }else{
	      life--;
	      sound(20);
	      delay(500);
	      nosound();
	      if(life==0){
			 clrscr();
			 gotoxy(40,13);
			 textcolor(RED);
			 cprintf("GAME OVER");
			 sound(2000);
			 delay(2000);
			 nosound();
			 getch();
			 exit(0);

		}

	 }
	      candyX=rand()%80+1;
	      candyY=2;

	   }
	   delay(200);
	 goto start;
	 getch();

}
