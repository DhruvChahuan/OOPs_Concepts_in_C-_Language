// Get and print student data using sturcture in C++ Language...

#include<iostream>
#include<conio.h>
using namespace std;

struct student{
	char name[100];
	int er_no;
};

int main(){
	struct student s1;
	//Get data of student..
	cout<<"Enter Your neme : ";
	cin>>s1.name;
	cout<<"Enter Your Enrollment number : ";
	cin>>s1.er_no;	
	
	//Print data of sutdent.
	cout<<"Name : "<<s1.name<<endl;
	cout<<"Enrollment Number : "<<s1.er_no<<endl;
	getch();
}
