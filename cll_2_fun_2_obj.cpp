#include<iostream>
using namespace std;
class product
{
	private : 
		int id, price;
		char name[20];
	public : 
		void getdata()
		{
			cout << "Enter Folloewing Data Sequentially : " << endl;
			cout << "------------------------------------ " << endl;
			cout << "ID NAME PRICE : " << endl;
			cout << endl;
			cin >> id >> name >> price;
		}
		void putdata()
		{
			cout << endl << "ID : " << id << endl;
			cout << "NAME : " << name << endl;
			cout << "PRICE : " << price << endl;
		}
};
int main()
{
	product A, B;
	A.getdata();
	A.putdata();
	cout << endl;
	B.getdata();
	B.putdata();
}
