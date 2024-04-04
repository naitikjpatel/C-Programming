#include<stdio.h>
#include<conio.h>
void main(){
	   int choice,choice1,choice2,quantity;
	   clrscr();
	   start:
	   printf("\n1-----south indian\n");
	   printf("2-----Gujarati\n");
	   printf("3-----Exit\n");
	   printf("Enter the choice : ");
	   scanf("%d",&choice);
	   switch(choice){
	       case 1:
		    printf("\nYou have sekected south indian");
		    printf("\n1-------Dosa----->60");
		    printf("\n2-------Idli----->70");
		    printf("\n3-------Medu vada---->100");
		    printf("\nEnter the choice : ");
		    scanf("%d",&choice1);
		    switch(choice1){
		case 1:
		     printf("you have selected Dosa");
		     printf("\nEnter the quantity : ");
		     scanf("%d",&quantity);
		    printf("\nYour dosa bill would be : %0.2f",quantity*60.0);
		     break;
		case 2:
		     printf("you have selected idli");
		     printf("\Enter the quantity : ");
		     scanf("%d",quantity);
		    printf("\nYour idli bill would be : %0.2f",quantity*70.0);
		     break;
		case 3:
		     printf("You have selected medu vada");
		     printf("\nEnter the quantity : ");
		     sacnf("%d",&quantity);
		     printf("\nYour medu vada bill would be :  %0.2f",quantity*100);
		     break;

		default:
		      printf("you have entered invalid choice");
		  }
		  break;
	    case 2:
		 printf("\nYou have selected Gujarati");
		 printf("\n1-----roti----->15");
		 printf("\n2-----vegitables----->100");
		 printf("\n3------sweets------>1000");
		 printf("\nEnter the choice : ");
		 scanf("%d",&choice2);
		 switch(choice2){
		 case 1:
		       printf("You have selected roti");
		       printf("\nEnter the quantity : ");
		       scanf("%d",&quantity);
		       printf("\nYour roti bill would be : %0.2f",quantity*15.0) ;
		       break;
		 case 2:
		       printf("you have selected vegitables");
		       printf("\nEnter the quantity : ");
		       sacnf("%d",&quantity);
		       printf("\nyour vegitables bill would be : %0.2f",quantity*100.0);
		       break;
		 case 3:
		       printf("you have selected sweets");
		       printf("\nEnter the quantity : ");
		       scanf("%d",&quantity);
		       printf("\nYour sweets bill would be : %0.2f",quantity*1000.0);
		       break;
		 /* default:
			printf("you have entered invalid choice");
			}
			break;*/
	       case 5:
		 exit(0);
	    default:
		 printf("\nYou have selected invalid choice");
		// goto start;
		 getch();

		    }                   //end of main