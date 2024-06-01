// Single Inheritance....

#include<iostream>
#include<conio.h>
using namespace std;

class a{
	public: 
	   void display1(){
	   	     cout<<"This is class A......"<<endl;
	   	     cout<<endl;
	   }	   
};

class b : public a{
	public:
		void display2(){
			cout<<"This is class b........."<<endl;
		}
};

int main(){
	b b1;
	b1.display1();
	b1.display2();
	getch();
}
