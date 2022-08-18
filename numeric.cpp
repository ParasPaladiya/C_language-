#include<iostream>
using namespace std;
int main (){
	
	char ch;
	
	cout << "please enter any input:";
	cin >> ch;
	
	if (ch >= '0' << ch <= '9'){
		cout << "input is numeric";
	}else{
		cout << "input is not numeric";
	}
	
	return 0;
}
