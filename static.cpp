#include<iostream>
using namespace std;
class test{
		static int count;
	public : 
		static void showcount(){
			cout << "count is : " << count << endl;
			count++;
		}
};
int test :: count;
int main()
{
	//test t;
	test::showcount();
	test::showcount();
	test::showcount();
	/*t.setcode();
	t.showcode();*/
	return 0;
}
