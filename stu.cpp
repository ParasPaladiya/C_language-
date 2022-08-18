o#include<iostream>
using namespace std;

class student {
	public:
		int id;
		float per;
		
	public :
		void readData(){
			cout << "please enter id :";
			cin >> id;
			cout << "please enter percentage: ";
			cin >> per;
		}
		void displayData(){
			cout << "id:" << id << endl;
			cout << "percentage:" << per << endl; 
		}
};
int main (){
	student s1,s2;
	s1.readData();
	s1.displayData();
	
	s2.readData();
	s2.displayData();
	
	return 0;
	
}
