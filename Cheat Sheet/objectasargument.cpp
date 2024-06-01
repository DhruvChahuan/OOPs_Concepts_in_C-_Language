//Object as an argument....

#include<iostream>
#include<conio.h>
using namespace std;

class base{
	int v1,v2;
	public:
		void getdata(){
			cout<<"Enter Values : ";
			cin>>v1>>v2;
		}
	   	static int sum(base ob){
			int sum = ob.v1 + ob.v2;
			cout<<"Sum of two vallues : "<<sum<<endl;
		}
};

int main(){
	base ob1;
	ob1.getdata();
	base::sum(ob1);
	getch();
}
