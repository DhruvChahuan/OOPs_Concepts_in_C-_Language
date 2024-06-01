// Default Argument with Constructor.....

#include<iostream>
#include<conio.h>
using namespace std;

class sample{
	int a,b;
	public:
		sample(int x,int y = 100){
			a = x;
			b = y;
			cout<<"a = "<<a<<endl;
			cout<<"b = "<<b<<endl;
			cout<<endl;
		}
};

int main(){
	sample s1(10,50),s2(10);
	getch();
}
