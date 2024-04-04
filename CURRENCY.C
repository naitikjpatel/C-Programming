// write a c program for currancy convertor
//1.INR TO USA(with A,without R)
//2.INR TO CANADA(without A,without R)
//3.INR TO DUBAI(with A ,without R)
//4.INR TO EUROPE(without A,withR)
//5.INR TO JAPAN(withA,withR)
//6.INR TO PAKISTAN(without A,without R)

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//decleration and defination banne ek sathe kari shakay
float INRTOUSD(float INR){
     float result;
     result = 0.013 * INR;
     return result;
     }

void INRTOCSD();
void INRTODERRAN(float INR);
float INRTOEURO();
float INRTOJAPAN(float INR);
void INRTOPAKISTAN();

void main(){
      int choice;
      float input,output;
      clrscr();
      start:
      printf("\n1---------INR To USD");
      printf("\n2---------INR To CSD");
      printf("\n3---------INR To DERRAN");
      printf("\n4---------INR To EURO");
      printf("\n5---------INR To Japan Currency");
      printf("\n6---------INR To Pakistan Currency");
      printf("\n0---------exit");
      printf("\nEnetr the choice");
      scanf("%d",&choice);
      switch(choice)
      {
	   case 1:
		   printf("\nEnetr the value in INR :");
		   scanf("%f",&input);
		   output=INRTOUSD(input);
		   printf("\nThe value in USd is : %0.2f",output);
		   break;
	   case 2:
		   INRTOCSD();
		   break;
	   case 3:
		   printf("\nEnetr the value in INR :");
		   scanf("%f",&input);
		   INRTODERRAN(input);
		   break;
	   case 4:
		   output=INRTOEURO();
		   printf("\nThe value in EURO is :%0.2f",output);
		   break;
	   case 5:
		   printf("\nEnetr the value in INR");
		   scanf("%f",&input);
		   output=INRTOJAPAN(input);
		   printf("\nThe value in Japan Currency is :%0.2f",output);
		   break;
	   case 6:
		   INRTOPAKISTAN();
		   break;
	   case 0:
		   exit(0);
	   default:
		   printf("\nInvalide choice");

		}//end of switch
	    goto start;
	    getch();
	    }//end of main

void INRTOCSD(){
    float CSD,INR;
    printf("\nEnter the value:");
    scanf("%f",&INR);
    CSD=0.017 * INR;
    printf("\nThe value in CSD is :%0.2f",CSD);
    }

void INRTODERRAN(float INR){
   float derram;
   derram = 0.048* INR;
   printf("\nThe value in derram is :%.2f",derram);
   }

float INRTOEURO(){
    float euro,INR;
    printf("\nEnetr value in INR:");
    scanf("%f",&INR);
    euro=0.012*INR;
    return euro;
    }

float INRTOJAPAN(float INR){
    float result;
    result = 1.49*INR;
    return result;
    }


void INRTOPAKISTAN(){
    float pakistancurrency,INR;
    printf("\nEnter the value:");
    scanf("%f",&INR);
    pakistancurrency=2.33* INR;
    printf("\nThe value in pakistancurrency is :%.2f",pakistancurrency);

    }
