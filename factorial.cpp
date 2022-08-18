#include<iostream>
using namespace std;

int factorial(int num){
	if (num > 1){
		return num*factorial(num -1);
	}else{
		return 1;
	}
}
int main (){
	
	int num, res;
	
	cout << "please enter number :";
	cin >> num;
	
	res = factorial(num);
	
	cout << "factorial value is :"<< res;
	
	return 0;
}
