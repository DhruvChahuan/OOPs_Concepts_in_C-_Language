//Use of Public access and Private access modifiers in class and defining objects...

#include<iostream>
#include<conio.h>
using namespace std;

class example{
	private:
		int length,width,height;
	public:
	    int volume(int l,int w,int h){
	    	length = l;
	    	width = w;
	    	height = h;
	    	int volume = length*width*height;
	    	cout<<"Volume of Qube : "<<volume<<endl;
		}	
		  int area(int l,int w){
	    	length = l;
	    	width = w;
	    	int area = length*width;
	    	cout<<"Squre of Qube : "<<area<<endl;
		}	
};

int main(){
    example e1;
	e1.volume(10,10,10);
	e1.area(10,10);
	getch();
}
