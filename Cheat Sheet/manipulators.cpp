// Usw of Manipulators ..

#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

int main(){
	//use of endl
	cout<<"hello ...."<<endl;
	cout<<"How are you???"<<endl;
	cout<<endl;
	
	// use of setw()..
	cout<<setw(10)<<"subject-1 : "<<setw(10)<<"80"<<endl;
	cout<<setw(10)<<"subject-2 : "<<setw(10)<<"90"<<endl;
	cout<<setw(10)<<"Total : "<<setw(10)<<"170"<<endl;	
	cout<<endl;
	
	//use of setprecision...
	float a=0.2;
	cout<<"a = "<<fixed<<setprecision(4)<<a<<endl;
	cout<<"a = "<<scientific<<a<<endl;
	getch();
}
