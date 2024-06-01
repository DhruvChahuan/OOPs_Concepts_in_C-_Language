//Use of Static member and member function....

#include<iostream>
#include<conio.h>
using namespace std;

class staticmember{
	static int n;
	public:
		int setn(int a){
			n = a;
		}
		static int printn(){
			cout<<"N = "<<n<<endl;
		}
};

int staticmember::n;

int main(){
	staticmember s1;
	s1.setn(50);
	staticmember::printn();
	getch();
}
