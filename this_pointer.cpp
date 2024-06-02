#include<iostream>
using namespace std;
class test{
	private :
		int x;
	public :
		void show()
		{
			cout << "Object's address is : " << this << endl;
		}
};
int main()
{
	test t1, t2, t3;
	t1.show();
	t2.show();
	t3.show();
	return 0;
}


