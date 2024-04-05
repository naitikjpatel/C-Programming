/*       author: naitik patel
	 objective : structure data copy to another structure
		    variable in copy
*/
#include<stdio.h>
#include<conio.h>
struct student{
       int rollno;
       char gender;
       float age;
}s1;
struct employees{
       int empid;
       char gender;
       float age;
}e1;
void main(){
	 clrscr();
	 printf("\nenetr the rollno");
	 scanf("%d",&s1.rollno);
	 printf("\nEetr the gender");
	 fflush(stdin);
	 scanf("%c",&s1.gender);
	 printf("\nEnetr the age");
	 scanf("%f",&s1.age);

	 printf("\n%d\t%c\t%f",s1.rollno,s1.gender,s1.age);

	 /*e1=s1;
	    jo s1 and e1 e juda juda structure na varibale hoy to direct aa
	     rite equal (=) karine copy na kari shakay.

	     jo copy karva j hoy to apre ek ek data copy karvo pade
	     jo e rite copy karo to juda juda strcture na variable pan copy
	     kari shakay.e method niche darshaveli che.
	 */
	 e1.empid=s1.rollno;
	 e1.gender=s1.gender;
	 e1.age=s1.age;
	 printf("\n%d\t%c\t%f",e1.empid,e1.gender,e1.age);
	 getch();
	 }//end of main