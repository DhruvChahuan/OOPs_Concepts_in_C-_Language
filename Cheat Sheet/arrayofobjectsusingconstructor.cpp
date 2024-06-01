// Array of objects using Constructor.....

#include<iostream>
#include<conio.h>
using namespace std;

class sample{
	public:
		sample(){
			cout<<"This is a constructior...."<<endl;
		}
};

int main(){
	sample s1[5];
	getch();
}
