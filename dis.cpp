#include<iostream>
using namespace std;

class Distance{
	public: 
	int f1,f2;
	int i1,i2;
	
	public:
		void readData(){
			cout << "please enter feet 1:";
			cin >> f1;
			cout << "please enter inch 1:";
			cin >> i1;
			cout << "please enter feet 2:";
			cin >> f2;
			cout << "please enter inch 2:";
			cin >> i2;
		}
		void add (){
			int ft,it;
			
			ft = f1+f2;
			it = i1+i2;
			
			while(it >= 12){
				ft++;
				it = it -12;
			}		
			cout << "Total distance is :"<< ft << " " << it;
		} 
};
int main (){
	Distance d1;
	d1.readData();
	d1.add();
	
	return 0;
	
}
