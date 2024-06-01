// Constructor With based and Derived Class....

#include<iostream>
#include<conio.h>
using namespace std;

class a{
	public: 
	    a(){
	   	   cout<<"this is constructor of a class...."<<endl;
	   	   cout<<endl;
	   }  
};

class b : public a{
	public:
		b(){
			cout<<"This is Constructor of b class....."<<endl;
		}
};
int main(){
	b b1;
	getch();
}
