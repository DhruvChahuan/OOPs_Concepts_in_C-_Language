// Abstract Class.....

#include<iostream>
#include<conio.h>
using namespace std;

class a{
	public: 
	   virtual void display() = 0;  
};

class b : public a{
	public:
		void display(){
			cout<<"This is display function of b class....."<<endl;
			cout<<endl;
		}
};

class c : public a{
	public: 
	    void display(){
	    	cout<<"This is display function of c class"<<endl;
	    	cout<<endl;
		}
};

int main(){
	a *p;
	b b1;
	c c1;
	
	p = &b1;
	p->display();
	
	p = &c1;
	p->display();
	getch();
}
