// Returning values from function....

#include<iostream>
#include<conio.h>
using namespace std;

int &number();

int main(){
	int num;
	number() = 10;
	cout<<"Number = "<<num;
	getch();
}
