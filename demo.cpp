#include<iostream>
using namespace std;

class demo{
	private:
		int id;
		
	public:
		void getsid(){
			cout << "please enter id : ";
			cin >> id;
		}
		void display(){
			cout << id;
		}
};
int main (){
	demo d;
	
	d.getsid();
	d.display();
	
	
	return 0;
}
