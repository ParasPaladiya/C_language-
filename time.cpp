#include<iostream>
using namespace std;

class Time{
	public :
		int s;
		
	public:
		void readsecond(){
			cout << "please enter seconds :";
			cin >> s;
		}
};
int main (){
	Time t1;
	int hr,mi,se,temp;
	
    t1.readsecond();

	hr = t1.s / 3600;
	temp = t1.s % 3600;
	mi = temp / 60;
	se = temp % 60;
	
	cout << hr << ":" << mi << ":" << se ;
	
	return 0;
}
