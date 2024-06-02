#include<iostream>
using namespace std;
class student{
	private :
		int no, age;
		char name[50];
	public :
		void getdata(int x, char name1[50],int y){
			no=x;
			strcpy(name,name1);
			age=y;
		}
		void show(){
			cout << "Reg no. : " << no << endl;
			cout << "Age is : " << age << endl;
			cout << "Name is : " << name << endl;
		}
};
int main()
{
	student s;
	student *s1;
	*s1 = s;
	s1 -> getdata(07,"Parth",17);
	s1 -> show();
	return 0;
}


