/*         objective: to find out the prime number(second meathod)
    (1st meathod save in prime.c )
    */                            // aa proram 3 thi mota ank mate sacho che
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
      int n,i,prime=0;
      clrscr();
      printf("\nEnter the value of n");
      scanf("%d",&n);
      if(n==2){
	  printf("\n%d is a prime number",n);
	   getch();
	   exit(0);
	  }
	  for(i=2;i<sqrt(n);i++){


		 if(n%i==0){
		      prime=0;
		      break;
		 }else{
		       prime=1;
		       }
	 }

	 if(prime==1){
	      printf("%d is a prime number",n);
	      }else{
		  printf("%d ia not a prime number",n);
	      }

	      getch();

	   }//end of main