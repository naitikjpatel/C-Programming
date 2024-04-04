/*              Author : naitik patel
		objective:pointer with array
*/
void main(){
	 int a[5];
	 int i;
	 int *x;
	 int sum=0;
	 clrscr();
	 for(i=0;i<5;i++){
		 printf("\nEnter the value of a[%d]",i);
		 scanf("%d",&a[i]);
	}
	x=a;
	for(i=0;i<5;i++){
		printf("\n%d.........%u",*(x+i),(x+i));
		sum=sum+*(x+i);
	}
	printf("\nThe sum is %d",sum);
	getch();
 }//end of main