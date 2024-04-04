#include<iostream.h>
#include<conio.h>

class Parent{
int a,b;
public:
Parent(){
a=5;
b=5;
cout<<"\nThis is a default constructor of parent class"<<endl;
}
void sum(){
    cout<<"\nThe sum is " <<(a+b)<<endl;
}
};
class Child:public Parent{
int c,d;
public:
Child(){
	c=7;
	d=4;
	cout<<"\nThis is a Default constructor of child class"<<endl;
}
void multi(){
	cout<<"\nThe multiplication is  "<<(c*d)<<endl;
}
};

int main(){
	Child c;
	clrscr();
	c.sum();
	c.multi();
	getch();
	}

