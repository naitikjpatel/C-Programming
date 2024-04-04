/*              author : naitik patel
		objective : to study for a  structure program
*/
#include<stdio.h>
#include<conio.h>
//structure :with help structure we can create our own data type
typedef struct Student {
	       int studentID;
	       char name[30];
	       int numberofsubject;
 }Student;
 int counter =0;
 void main(){
	   //int a;
	   //struct
	   //0 1 2 3 4
	   Student s[5];
	   int choice,i,id,flag;
	   char name[30];

	   start:
	   printf("\n1--------Add student");
	   printf("\n2--------Search student");
	   printf("\n3--------display all student");
	   printf("\n0--------exis");
	   printf("\nEnter the choice :");
	   scanf("%d",&choice);
	   switch(choice){
			case 1:
			    if(counter>=5){
				printf("\nNo admission can be done");
			    }else{
				printf("\nEnter name :");
				scanf("%d");
				gets(name);
				strcpy(s[counter].name,name);
				s[counter].numberofsubject=5;
				s[counter].studentID=counter + 1;
				counter++;
			    }
			    break;


		       case 2:
			    printf("\nEnter studint ID:");
			    scanf("%d",&id);
			    flag = 0;
			    if(counter ==0){
				  printf("\nNo admission done.please do marketing");
			    }else{
				  for(i=0;i<counter;i++){
				  if(s[i].studentID==id){
				       printf("\nStudent found");
				       printf("\n\n..........\n\n");
				       printf("\nName of %s",s[i].name);
				       printf("\nStudent ID:%d",s[i].studentID);
				       printf("\nNumber of subject : %d",s[i].numberofsubject);
				       printf("\\n\n------------\n\n");
				       flag=1;
				       break;
				 }
			    }
			    if(flag==0){
				 printf("\nStudent not found");
			    }
			}
			break;
		    case 3:
			   if(counter==0){
				 printf("\nNo admission done.please do marketing");
			}else{
			       for(i=0;i<counter;i++){
				    printf("\n\n---------\n\n");
				    printf("\nname of %s",s[i].name);
				    printf("\nstudent ID: %d",s[i].studentID);
				    printf("\nNumber of subject:%d",s[i].numberofsubject);
				    printf("\n\n----------\n\n");
				 }
			     }
			   break;
		     case 4:
			     exit(0);
		      default:
			   printf("\Entered valid choice");
			}
getch();
}//end of mian