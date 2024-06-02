/*W.a.p. to ind max from three no using class*/
#include<iostream>
using namespace std;
class max{
	protected :
		int a, b, c;
	public :
		void getdata(){
			cout << "Enter three no : " << endl;
			cin >> a >> b >> c;
		}
};
class Max : public max{
	public : 
		 void putdata(){
		 	max :: getdata();
		if(a>b)
		{
			cout << "Max is : " << a << endl;
		}
		else if(b>c)
		{
			cout << "Max is : " << b << endl;
		}
		else
		{
			cout << "Max is : " << c << endl;
		}
	}
};
int main()
{
	Max o;
	o.putdata();
	return 0;
}

