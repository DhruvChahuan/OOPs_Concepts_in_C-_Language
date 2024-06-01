// Use of default Argument...

#include<iostream>
#include<conio.h>
using namespace std;

 defaultargument(int a = 10,float c = 3.12){
	cout<<"Integer Number : "<<a<<endl;
	cout<<"Float number : "<<c<<endl;
}

int main(){
	defaultargument();
	defaultargument(5.5000);

	getch();	
}
