// Use of scop resolution operatior.
// Initialization of scope resolution op. ::anydata_type_name..
// This operatior is used too give body of function outside the class. Which is declared in class..

#include<iostream>
#include<conio.h>
using namespace std;

static int x = 100;
int y = 10;

int main(){
	int y = 20;
	cout<<"Static Keyword : "<<::x<<endl;
	cout<<"Global Decalred : "<<y<<endl;
	cout<<"Localy Declard : "<<::y<<endl;
	getch();
}
