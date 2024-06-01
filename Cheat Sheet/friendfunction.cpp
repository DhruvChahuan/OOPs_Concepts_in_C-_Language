//firend Function....

#include<iostream>
#include<conio.h>
using namespace std;

class base{
	int val1,val2;
	public:
		void getdata(){
			cout<<"Enter values : ";
			cin>>val1>>val2;
		}
		friend void sum(base ob);
};
        void sum(base ob){
			int sum = ob.val1 + ob.val2;
			cout<<"sum OF enterd values : "<<sum<<endl;
		}

int main(){
	base obj;
	obj.getdata();
	sum(obj);
	getch();
}
