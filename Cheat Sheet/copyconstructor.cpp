// Copy Constructor.....

#include<iostream>
#include<conio.h>
using namespace std;

class sample{
	int a,b;
	public:
		sample(){
			 a = 100;
			 b = 200;
		}
		void print(){
			cout<<"a = "<<a<<endl;
			cout<<"b = "<<b<<endl;
		}
};

int main(){
	sample s1,s2;
	s2 = s1;
	s2.print();
	getch();
}
