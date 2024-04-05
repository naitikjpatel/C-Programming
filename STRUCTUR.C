/*       Author : naitik patel
	objective: create a marksheet using structure
*/
#include<stdio.h>
#include<conio.h>
struct student{
	int sid;
	char name[30];
	float comp,eng,maths,fees,total,per;
	char grade;
}s[4];  //array of structure
//or struct student s1,s2,s3,s4;
void main(){
      int i;
      float temp;//structure ma jo float veraiable lidha hoy to void main ma float declar karva pade ane ek temp veriable levo pade

      clrscr();
      for(i=o;i<2;i++){
	    printf("\Enetr the sid name:");
	    scanf("%d%s",&s[i].sid,s[i].name);
	   printf("\nEnetr the comp mark:");
	   scanf("%f",&temp);
	   s[i].comp=temp;
	    printf("\nEnetr the eng mark:");
	   scanf("%f",&temp);
	   s[i].eng=temp;
	    printf("\nEnetr the maths mark:");
	   scanf("%f",&temp);
	   s[i].maths=temp;
	    printf("\nEnetr the fees mark:");
	   scanf("%f",&temp);
	   s[i].fees=temp;
	   s[i].tptal=s[i].comp+s[i].eng+s[i].maths;
	   s[i].per=s[i].total/3;
	   if(s[i].per>=90){
		 s[i].grade='A';
	   }else if(s[i].per>=80){
		 s[i].per='B';
	   }else{
		 s[i].grade='c';
	   }


	 }//end of for
	 clrscr();
	 printf("\nsid\tname\tfees\tcomp\teng\tmaths\ttotal\tper\tgrade\n");
	 for(i=0;i<2;i++){
	    printf("\n%d\t%s\t.2f\t.2f\t.2f\t.2f\t.2f\t.2f\t%c",s[i].sid,
	    s[i].name,s[i].fees,s[i].comp,s[i].eng,s[i].maths,s[i].total,
	    s[i].per,s[i].grade);
	   }
	getch();
     }

