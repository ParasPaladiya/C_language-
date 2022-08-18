#include<iostream>
using namespace std;

class test{
	public :
		float r;
		float area;
		
	public :
	void input(){
		cout << "please enter radius of circle :";
		cin >> r;
	}
	void findarea(){
		area = 3.14*r*r;
	}
	void displaydata(){
		
	cout << "Area of circle is : " << area << r <<endl;
    }
};
int main (){
	test obj ;
	
    obj.input();
    obj.displaydata();
    obj.findarea();
    
    return 0;	
}
