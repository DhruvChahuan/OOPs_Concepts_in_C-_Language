//Use of Array of objects...

#include<iostream>
#include<conio.h>
using namespace std;

class studentsdata{
	char name[100];
	int er_no;
	public:
		void getdata(){
			cout<<"Enter your name : ";
			cin>>name;
			cout<<"Enrter your enrollment number : ";
			cin>>er_no;
		}
		void putdata(){
			cout<<"Nmae : "<<name<<endl;
			cout<<"Enrollment number : "<<er_no<<endl;
		}
};

int main(){
	studentsdata s[3];
	int i;
	cout<<"Enter Data...."<<endl;
    for(i = 0;i <= 3;i++){
    	s[i].getdata();
	}
	
	cout<<"Enterd Data....."<<endl;
	
    for(i = 0;i <= 3;i++){
    	s[i].putdata();
	}
	getch();
}
