//Sweaping the values using call by reference..

#include<iostream>
#include<conio.h>
using namespace std;

int sweap(int &a,int &b){
	int temp = a;
	a = b;
	b = temp;
	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b<<endl;
}

int main(){
	int x = 100,y = 200;
	cout<<"after sweaping the values using call by refence ...."<<endl;
	sweap(x,y);
	getch();
}
