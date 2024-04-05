/*           Author : naitik patel
	     objective :update ,delate,search,scan in structure
*/
#include<stdio.h>
#onclude<conio.h>
struct student{
      int sid;char name[30];
      float comp,eng,maths;
      float per,total;
      chargrade;
}s[2];
//or struct student s1,s2;
int update();
int search();
void display();
void scan();

void main(){
	  int choice,ans,x;
	  start:
	  printf("\n1-------scan");
	  printf("\n2-------display");
	  printf("\n3-------search");
	  printf("\n4-------update");
	  printf("\n5-------exit");
	  printf("\nEnter the choice");
	  scanf("%d",&choice);
	  switch(choice){
		   case 1: scan();
			   break;
		   case 2:display();
			   break;
		   case 3:ans=search();
			 if(ans>=0){
			      printf("\nsid\tname\tgrade");
			      printf("\n%d\t%s\t%c",s[ans].sid,s[ans].name,s[ans].garde);
			 }else{
			      printf("\nData not found");
			 }
			 break;
		   case 4: x=update();
			  if(x==1){
			      printf("\nThe updation of record is sucessfull");
			  }else{
			     printf("\nCould not process the update");
			  }
			  break;
		   case 5:exit(0);
       }//end of switch
       getch();
       goto start;
 }//end of main

int update(){
      int x;
      float temp;//marks update karvana che to marks ne temp vetraiable ma store karava pade
      x=search();
      if(x>=0){
	    clrscr();
	    printf("\nsid\tname\teng\tmaths\tcomp");
	    printf("\n%d\t%s\t.2f\t.2f\t.2f",s[x].sid,s[x].name,s[x].eng,s[x].maths,s[x].comp);
	    printf("\nplease enter the new marks you want to update of eng,maths,comp:");
	    scanf("%f",&temp);
	    s[x].eng=temp;
	    scanf("%f",&temp);
	    s[x].maths=temp;
	    scanf("%f",&temp);
	    s[x].eng=temp;
	    s[x].total=s[x].maths+s[x].eng+s[x].comp;
	    s[x].per=(float)(s[x].total/3);
	    if(s[x].per>=90){
		s[x].grade='A';
	    }else{
		s[x].grade='C';
	    }