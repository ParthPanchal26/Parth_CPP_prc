#include<iostream>
using namespace std;
class base{
	public :
		virtual void show()=0;
};
class derived : public base
{
	public :
		void show()
		{
			cout << "Class contain at least one pure virtual function called abstract class :" << endl;
			}	
};
int main()
{
	derived b;
	b.show();
	return 0;
}


