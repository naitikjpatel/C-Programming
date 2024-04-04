#include<stdio.h>
#include<conio.h>
int main(){
	int a[10][10];
	int i,j;
	int r,c;
	printf("\nEnter the metrix row ");
	scanf("%d",&r);
	printf("\nEnter the metrix column ");
	scanf("%d",&c);
	pritnf("Enter the metrix element ");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&a[i][j]);
		}
	}

	printf("\n\n");
	printf("\nContent of the metrix is ..\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	getch();
	return 0;
}