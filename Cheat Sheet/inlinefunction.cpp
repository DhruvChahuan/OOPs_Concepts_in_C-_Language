//Inline function..

#include<iostream>
#include<conio.h>
using namespace std;

inline int printnumber(int n){
	cout<<"Num = "<<n<<endl;
}

int main(){
	printnumber(10);
	printnumber(20);
	printnumber(30);
	printnumber(40);
	getch();
}
