#include<iostream>
using namespace std;
int main (){
	
	int i=20;
	int &r=i;
	
	i = 20;
	r = 50;
	
	cout << "i:" << i << endl;
	cout << "r:" << r;
	
	return 0;
}
