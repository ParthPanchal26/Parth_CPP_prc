#include<iostream>
using namespace std;
class A
{
	public : 
		int i;
};
class B : virtual public A
{
	public :
		int j;
};
class C : virtual public A
{
	public : 
		int k;
};
class D : public B, public C
{
	public :
		int sum;
};
int main()
{
	D obj;
	obj.i=10;
	obj.j=20;
	obj.k=30;
	obj.sum=obj.i+obj.j+obj.k;
	cout << "The sum is : " << obj.sum << endl;
}
