/*           author:naitik patel
	     objective: week day name print
*/
#include<stdio.h>
#include<conio.h>
void main(){
	 int day,choice;
	 clrscr();
	 printf("\n1...........monday");
	 printf("\n2...........tuseday");
	 printf("\n3..........wenesday");
	 printf("\n4.........thursday");
	 printf("\n5..........frieday");
	 printf("\n6...........saturday");
	 printf("\n7...........sunday");
	 printf("\n0..........exist");
	 printf("\nEnthe the choice");
	 switch(choice){
	      case 1:
		       printf("\nMonday");
		       break;
	      case 2:
		       printf("\nTuseday");
		       break;
	      case 3:
		       printf("\nWenesday");
		       break;
	      case 4:
		       printf("\nThursday");
		       break;
	      case 5:
		       printf("\nfriday");
		       break;
	      case 6:
		       printf("\nsaturday");
		       break;
	      case 7:
		       printf("\nsunday");
		       break;
	      case 0:
		       exist(0);
	     default:
		       printf("\nUnvalide choice");
	     }//end of switch
     getch();
     }//end of main
