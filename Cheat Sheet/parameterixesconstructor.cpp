// Parameterised Constructor.....

#include<iostream>
#include<conio.h>
using namespace std;

class sample{
	int v1,v2;
	public:
		sample(int val1,int val2){
			v1 = val1;
			v2 = val2;
			int sum = v1 + v2;
			cout<<"Sum of two values : "<<sum<<endl;
		}
};

int main(){
	sample s1(5,5);
	getch();
}
