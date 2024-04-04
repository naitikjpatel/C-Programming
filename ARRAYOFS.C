/*         author : naitik patel
	   objetive: write a program for structure

*/
#include<stdio.h>
#include<conio.h>
struct student{
	int sid;
	char name[30];
	int fees;
}s[4];//array of structure
//or sturct student s1,s2;  ----am pan lakhi shakay
void main(){
       int i;
       clrscr();
       for(i=0;i<4;i++){                                  //scan karava  mate
	    printf("\nEnetr the sid name and fees:");
	    scanf("%d%s%d",&s[i].sid,s[i].name,&s[i].fees);
	  }//end of for loop
       clrscr();
       printf("\nsid\tname\tfees\n");
       for(i=0;i<4;i++){
	  printf("\n%d\t%s\t%d",s[i].sid,s[i].name,s[i].fees);
	}//end of for

      getch();
      }//end of main