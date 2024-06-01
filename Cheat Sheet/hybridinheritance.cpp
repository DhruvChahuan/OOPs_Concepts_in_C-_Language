// Hybrid Inheritance....

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

class c {
	public: 
	    void display3(){
	    	cout<<"This is class c........"<<endl;
	    	cout<<endl;
		}
};

class d : public b,public c{
	public: 
	    void display4(){
	    	cout<<"This is class c........"<<endl;
		}
};

int main(){
	d d1;
	d1.display1();
	d1.display2();
	d1.display3();
	d1.display4();
	getch();
}
