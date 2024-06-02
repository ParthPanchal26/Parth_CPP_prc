#include<iostream>
using namespace std;
class c{
	private :
		int a, b;
	public :
		c(int x, int y)		// Parameterized constructor
		{
			a=x;
			b=y;
		}
		c(c &p)			// Copy constructor
		{
			a=p.a;
			b=p.b;
		}
		cshow(){
			cout << "A = " << a << " B = " << b << endl;
		}
};

int main()
{
	c o(8786, 876);
	o.cshow();
	c o1(o);
	o1.cshow();
	return 0;
}
