// Find area of circle,rectangle,squre using functin overloading..

#include<iostream>
#include<conio.h>
using namespace std;

//Circle...
float area(int r,double pi){
	double  area = pi*r*r;
	cout<<"Area of circle : "<<area<<endl;
}

//Rectangle..
int area(int l,int b){
	int area = l*b;
	cout<<"Area of rectangle : "<<area<<endl;
}

//Squre...
int area(int l){
	int area = l*l;
	cout<<"Area of squre : "<<area<<endl;
}

int main(){
	area(10,3.14);
	area(10,10);
	area(10);
	getch();
}

