#include<iostream>
using namespace std;
class sum 
{
	private :
		int a, b, c;
	public : 
	    void sum()
		{
			cout << "Enter two no. : " << endl;
			cin >> a >> b;
			c=a+b;
			cout << "Sum is : " << c << endl;	
		}
};
int main()
{
	sum s1;
	s1.sum();
	int a;
	//A:
		cout << "Enter 5 if you want to quit" << endl << "Enter 6 if you want to continue : " << endl;
		cin >> a;
	//	if(a==5)
	//	{
	////		goto B;
	//	}
	//	else
	//	{
	//		goto C;
	//	}
	//C:	
	sum s1;
	s1:sum();
	//goto A;
	//B:
		cout << " ";
}
