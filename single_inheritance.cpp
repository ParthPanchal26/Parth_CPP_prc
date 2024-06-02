#include<iostream>
using namespace std;
class A
{
	protected : 
		int a, b, c;
	public :
			void getdata()
			{
				cout << "Enter value of a and b : " << endl;
				cin >> a >> b;
			}
			void sum()
			{
				c = a + b;
			}
};
class B : public A
{
	protected : 
		int d;
	public : 
		void sub()
		{
			d = a - b;
		}
		void show()
		{
			cout << "Value of a is : " << a << endl << "Value of b is : " << b << endl;
			cout << "Sum is : " << c << endl << "Subtrction is : " << d << endl;
		}
};
main()
{
	B obj;
	obj.getdata();
	obj.sum();
	obj.sub();
	obj.show();
}
