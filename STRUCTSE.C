/*       author: naitik patel
	 objective: to search elements in stucture
*/
#include<stdio.h>
#include<conio.h>
struct student{
       int rollno;
       char name[20];
       char gender;
       float age;
};
void display(struct student s1);
void main(){
	struct student s[3],temp;
	int i ,choice;
	char ch='y';
	clrscr();
	for(i=0;i<3;i++){
	      printf("\nEnter rollno:");
	      scanf("%d",&s[i].rollno);
	      printf("\nEnter the name");
	      fflush(stdin);
	      gets(s[i].name);
	      printf("\nEnter gender");
	      scanf("%c",&s[i].gender);
	      printf("\nEnter the age");
	      scanf("%f",&s[i].age);
	}//end of for loop
	//repeat karva mate have do-whilr loop lidhu
	do{
	       clrscr();
	       printf("\n******search options******");
	       printf("\n1....search on rollno");
	       printf("\n2....search on name");
	       printf("\n3....search on gender");
	       printf("\n4....search on age");
	       printf("\n5....exit");
	       printf("\n***************************");

	       printf("\nEnter your choice");
	       scanf("%d",&choice);

	       switch(choice){
		       case 1:
			       printf("\nEnter rollno for searching");
			       scanf("%d",&temp.rollno);
			       for(i=0;i<3;i++){
				  if(s[i].rollno==temp.rollno)
					display(s[i]);
			       }
			       break;
			case 2:
				printf("\mEnter name for searching");
				fflush(stdin);
				gets(temp.name);
				for(i=0;i<3;i++){
				     if(strcmp(s[i].name,temp.name)==0)
					 display(s[i]);
				 }
				 break;
			 case 3:
				printf("\nEnetr gender for searching");
				fflush(stdin);
				scanf("%c",&temp.gender);
				for(i=0;i<3;i++){
				       if(s[i].gender==temp.gender)
					display(s[i]);
				}
				break;
			  case 4:
				 printf("\nEnetr age for searching");
				 scanf("%f",&temp.age);
				 for(i=0;i<3;i++){
				       if(s[i].age==temp.age)
					   display(s[i]);
				 }
				 break;
			   case 5:
				 exit(0);
			   default:
				   printf("\nInvalide choice");
		       }//end of the switch
		printf("\nDo you want to continue:");
		fflush(stdin);
		ch=getche();
		}while(ch='y');
	   getch();
}//end of main
void display(struct student s1){
      printf("\nrollno : %d",s1.rollno);
      printf("\nname   : %s",s1.name);
      printf("\ngender : %c",s1.gender);
      printf("\nage    : %f",s1.age);
}//end of udf
