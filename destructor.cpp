#include<iostream>
using namespace std;
class integer{
	int count;
	public :
		integer()
		{
			count++;
			cout << "No. of object creted : " << count << endl;
		}
		~integer()
		{
			cout << "No. of object deleted : " << count << endl;
			count--;
		}
};
int main()
{
	cout << "Enter main : " << endl;
	{
		integer i1, i2;
		{
			cout << "Enter block : " << endl;
			integer i3;
		}
	}
	return 0;
}


