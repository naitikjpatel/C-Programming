/*              objective:- To learn the basic functionlities of string
		string-: Collection of charcters is known as string


*/
#include<stdio.h>
#include<conio.h>
void main(){
      char name[30]; //string
      char ch;
      int i=0;
      clrscr();
      printf("\nEnetr the string:");
      //string ne scan karavani three (3) method che
      //1. scanf("%s",&name);   --scanf is not printing space and after space writing
      //2. gets(name);   --gets is printing a space and after space writing
      //3. while((ch=getchar())!='\n'){
      //               name[i]=ch;
      //               i++;
      //      }

      while((ch=getchar())!='\n'){
		    name[i]=ch;
		    i++;
		    }
      name[i]='\0';   // '\0' using for nulls value
      printf("\nThe string is %s",name);
      getch();
      }//end of main