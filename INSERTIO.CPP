#include<iostream.h>
#include<conio.h>
#define N 5
int main(){
	int a[N];
	int i,j,x,key;
	//scaning array
	cout<<"\nEnter the array element";
	for(x=0;x<N;x++){
		cin>>a[x];
		}
	 //printing array
	 cout<<"\nArray before sorting";
	 for(x=0;x<N;x++){
	 cout<<" "<<a[x];
	 }
	 //soritng
	 for(i=1;i<N;i++){
		key=a[i];
		for(j=i-1;j>=0;j--){
			if(a[j]>key){
			a[j+1]=a[j];
			}else{
			break;
			}
		       }
		    a[j+1]=key;
		    }
	 cout<<"\nArray after sorting";
	 for(x=0;x<N;x++){
		cout<<" "<<a[x];
		}
  getch();
 return 0;
}