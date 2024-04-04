/*
    take input of 5 subject form student and calculate overall percentage and
    print the grade of the student
    each subject : 100
    Grade A overall>90
    Grade B overall>80
    Grade C overall>70
    Grade D overall>60
    Grade E overall>50
    Grade F overall>30
    Grade Fail overall<30
    */
#include<stdio.h>
#include<conio.h>
void main(){
    int subject1,subject2,subject3,subject4,subject5,totalmarks;
    float percentage;
    printf("\nEnter the marks of subject1");
    scanf("%d",&subject1);
    printf("\nEnter the marks of subject2");
    scanf("%d",&subject2);
    printf("\nEnter the marks of subject3");
    scanf("%d",&subject3);
    printf("\nEnter the marks of subject4");
    scanf("%d",&subject4);
    printf("\nEnter the marks of subject5");
    scanf("%d",&subject5);
    totalmarks =subject1+subject2+subject3+subject4+subject5;
    //percentage=(marksgot/totalmarks)*100
    //percentage=(totalmarks/5)
    percentage=totalmarks/5.0;
    if(percentage>=90){
	     printf("\nYou Got Grade A");
	     }else if(percentage>=80){
		  printf("\nYou Got Grade B");
	     }else if(percentage>=70){
		  printf("\nYou Got Grade C");
	     }else if(percentage>=60){
		  printf("\nYou Got Grade D");
	     }else if(percentage>=50){
		  printf("\nYou Got Grade E");
	     }else if(percentage>=30){
		  printf("\nYou Got Grade F");
	     }else{
		  printf("\nBetter Luck next time ");
	     }
	     printf("\nOverall percentage : %0.2f",percentage);
	     getch();
}
