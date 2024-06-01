// Destructor......

#include<iostream>
#include<conio.h>
using namespace std;

class sample{
	public:
		sample(){
			cout<<"Constructor is created....."<<endl;
			cout<<endl;
		}
		~sample(){
			cout<<"Destructor is Destroyed....."<<endl;
		}
};

int main(){
	sample s1;
	s1.~sample();
	getch();
}
