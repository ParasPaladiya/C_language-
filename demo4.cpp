#include<iostream>
using namespace std;

class Demo{
	public:
		int counter =0;
		
	public:
		Demo(){
			counter++ ;
		}
};
int main (){
	Demo d1,d2;
	
	cout << "D1 counter value is :" << d1.counter << endl ;
	cout << "D2 counter value is :" << d2.counter;
	
	return 0;
}
