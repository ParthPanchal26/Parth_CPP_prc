#include<iostream>
using namespace std;

class employee
{
	protected :
		int empno;
		char name[20];
	public :
		void getdata()
		{
			cout << "Enter employee no. and name : " << endl;
			cin >> empno >> name;
		}
		void show()
		{
			cout << endl << "\tEmployee no. is : " << empno << endl << "\tEmployee name is : " << empno << endl;
		}
};
class education 
{
	protected : 
		char institute[30];
		char degree[30];
	public : 
		void getdata()
		{
			cout << "Enter Institute and Degree : " << endl;
			cin >> institute >> degree;
		}
		void show()
		{
			cout << "\tInstitute is : " << institute << endl << "\tDegree is : " << degree << endl;
		}
};
class manager : public employee, public education
{
	protected : 
		char designation[18];
	public :
		void getdata()
		{
			employee :: getdata();
			education :: getdata();
			cout << "Enter designation : " << endl;
			cin >> designation;
			cout << endl << "Details are : " << endl << "_______________________________________________________________" <<endl;
		}
		void show()
		{
			employee :: show();
			education :: show();
			cout << "\tDesignation is : " << designation << endl;
		}
};
main()
{
	system("color 0A");
	manager M;
	M.getdata();
	M.show();
}
