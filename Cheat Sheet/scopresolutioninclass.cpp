// Use of scop resolution in class to write a function outside the class...

#include<iostream>
#include<conio.h>
using namespace std;

class showroom{
	public:
		void bike();
		void car();
};

void showroom::bike(){
	cout<<"This a bike function..."<<endl;
}
void showroom::car(){
	cout<<"This is car function...."<<endl;
}

int main(){
	showroom s1;
	s1.bike();
	s1.car();
	getch();
}
