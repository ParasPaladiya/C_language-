#include<iostream>
using namespace std;

class Read{
	public:
		int id;
		float per;
		
	public:
		void setStudent(){
			cout << "please enter id:";
			cin >> id;
			cout << "please enter percentage:";
			cin >> per;
		}
};
class print{
	public:
		void printStudent(){
			Read r;
			
			r.setStudent();
			
			cout << "id:" << r.id << endl;
			cout << "per:" << r.per;
		}
};
int main (){
	print p;
	
	p.printStudent();
	return 0;
}
