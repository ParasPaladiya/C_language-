#include<iostream>
using namespace std;

class Time{
	public:
		int h,m,s;
		
	public:
		void readTime(){
			cout << "please enter time in hours   :";
			cin >> h;
			cout << "please enter time in minute  :";
			cin >> m;
			cout << "please enter time in second  :";
			cin >> s;
		}
};
int main (){
	int hr,mi,se;
	
	Time t1,t2;
	
	t1.readTime();
	t2.readTime();
	
	se = t1.s + t2.s;
	mi = t1.m + t2.m + se/60;
	hr = t1.h + t2.h + mi/60;
	
	se = se%60;
	mi = mi%60;
	
	cout << hr << ":" << mi << ":" << se;
	
	return 0;

}
