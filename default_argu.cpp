#include<iostream>
using namespace std;
int def(int a=0, int b=0)
{
	cout << "First value is : " << a << endl << "Second value is : " << b << endl;
	cout << endl;
}
int main()
{
	def();
	def(346);
	def(67, 45);
	return 0;
}
