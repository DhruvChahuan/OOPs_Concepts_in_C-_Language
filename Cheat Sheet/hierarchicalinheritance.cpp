// Hierarchical Inheritance....

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

class c : public a{
	public: 
	    void display3(){
	    	cout<<"This is class c........"<<endl;
	    	cout<<endl;
		}
};

class d : public a{
	public: 
	    void display4(){
	    	cout<<"This is class c........"<<endl;
		}
};

int main(){
	b b1;
	c c1;
	d d1;
	
	b1.display1();
	b1.display2();
	
	c1.display1();
    c1.display3();
    
    d1.display1();
    d1.display4();
	getch();
}
