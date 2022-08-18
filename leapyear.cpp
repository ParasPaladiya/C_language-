#include<iostream>
using namespace std;

int main (){
	int year ;
	
	cout << "please enter year :";
	cin >> year;
	
	if(year = 2000 && year <= 3000){
		if (year % 4 == 0){
			cout << year << " is leap year ";
		}else{
			cout << year << " is not leap year ";
		}
	}else{
		cout << "year must be within 2000 to 3000";
	}
	return 0;
}
