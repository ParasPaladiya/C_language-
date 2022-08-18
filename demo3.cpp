#include<iostream>
using namespace std;

class Demo{
	public:
		static int counter ;
		
	public:
		Demo(){
			counter ++;
		}
};
int Demo :: counter = 0;

int main (){
	Demo d1,d2;
	
	cout << "counter valur is :" << Demo :: counter ;
	
	return 0;
	
} 
