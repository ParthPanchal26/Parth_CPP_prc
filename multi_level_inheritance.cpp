/*W.a.p. to demonstrate multilevel inheritnce*/
#include<iostream>
using namespace std;

class student
{
	protected : 
		int no;
		char name[20];
	public : 
		void getdata()
		{
			cout << "Enter student no. and name : " << endl;
			cin >> no >> name;
		}
		void show()
		{
			cout << endl << "No. is : " << no << endl << "Name is : " << name << endl;
		}
};
class test : public student
{
	protected : 
		int sub1, sub2;
	public : 
		void getdata()
		{
			student :: getdata();
			cout << "Enter sub1 and sub2 marks out of 70 : " << endl;
			cin >> sub1 >> sub2;
		}
		void show()
		{
			student :: show();
			cout << "sub1 marks is : " << sub1 << endl << "sub2 marks is : " << sub2 << endl;
		}	
};
class result : public test
{
	protected : 
		int total;
		float per;
	public : 
		void show()
		{
			total = sub1 + sub2;
			per = (total/2)*100;
			test :: show();
			cout << "Total is : " << total << endl << "Persentage is : " << per << endl;
		}
};
main()
{
	result R;
	R.getdata();
	R.show();
}
