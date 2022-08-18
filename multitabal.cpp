#include<iostream>
using namespace std;

void multitable(int num){
	int i; 
	
	for (i=1 ; i<=10; i++){
		cout << num <<"x" << i <<" = " << num*i << endl; 
	}
}
int main (){
	int num, res;
	
	cout << "please enter number:";
	cin  >> num;
	
	multitable(num);
	
	return 0;
}
