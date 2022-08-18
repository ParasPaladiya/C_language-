#include<iostream>
using namespace std;

class Hotel{
	private:
		int id,staff_size,room_size,establish_year;
		string name,type,address,rating_type,website;
		
	public:
		void setData(int id,int staff_size,int room_size ,int establish_year,string name, string type, string address, string rating_type,string website){
			this->id = id;
			this->staff_size = staff_size;
			this->room_size = room_size;
			this->establish_year = establish_year;
			this->name = name;
			this->type = type;
			this->address = address;
			this->rating_type = rating_type;
			this->website = website;		}
		
		void getData(){
			cout << "id:" << id << endl;
			cout << "staff_size:" << staff_size << endl;
			cout << "room_size:" << room_size << endl;
			cout << "esatblish_year:" << establish_year << endl;
			cout << "name:" << name << endl;
			cout << "address:" << address << endl;
			cout << "rating_type:" << rating_type << endl;
			cout << "website:" << website << endl; 
		}		
};
int main (){
	int id ,staff_size,room_size,esatablish_year;
	string name,type,address,rating_type,website;
	
	Hotel h;
	
	cout << "please enter id:";
	cin >> id;
	cout << "please enter staff_size :";
	cin >> staff_size;
	cout << "please enter room_size:";
	cin >> room_size;
	cout << "please enter esatablish_year:";
	cin >> esatablish_year;
	cout << "please enter name:";
	cin >> name;
	cout << "please enter type:";
	cin >> type;
	cout << "please enter address:";
	cin >> address;
	cout << "please enter rating_type:";
	cin >> rating_type;
	cout << "please enter website:";
	cin >> website;
	
	h.setData( id,staff_size,room_size,esatablish_year,name,type,address,rating_type,website);
	h.getData();
	
	return 0;
	
}
