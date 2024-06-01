//call by value.
//Sweaping the value using call by value...

#include<iostream>
#include<conio.h>
using namespace std;

int sweap(int a,int b){
	int temp = a;
	a = b;
	b = temp;
	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b<<endl;
}

int main(){
	cout<<"After sweaping the values ..."<<endl;
	sweap(100,200);
	getch();
}

