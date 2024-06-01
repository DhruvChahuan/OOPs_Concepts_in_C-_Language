// Multilevel Inheritance....

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
			cout<<endl;
		}
};

class c : public b{
	public: 
	    void display3(){
	    	cout<<"This is class c........"<<endl;
		}
};
int main(){
	c c1;
	c1.display1();
	c1.display2();
    c1.display3();
	getch();
}
