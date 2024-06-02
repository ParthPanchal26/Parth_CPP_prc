#include<iostream>
using namespace std;
class base{
	public :
		virtual void show()
		{
			cout << "i'm virtual class : " << endl;
		}
};
class der1 : public base
{
	public :
		void show(){
			cout << "i'm derived 1 class : " << endl;
		}	
};
class der2 : public base
{
	public :
		void show()
		{
			cout << "i'm derived 2 class : " << endl;
		}
};
int main()
{
	base *c;
	int ch;
	cout << "1.Call derived class 1 : " << endl;
	cout << "2.Call derived class 2 : " << endl;
	cout << "Enter your choice  : " << endl;
	cin >> ch;
	if(ch==1){
		c=new der1;
	}
	else if(ch==2)
	{
		c=new der2;
	}
	return 0;
}


