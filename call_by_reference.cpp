/*Call by reference*/
#include<iostream>
using namespace std;

void swap(int &, int &);

int main(){
	int a, b;
	system("color 0A");
	cout << "Enter two numbers : " << endl;
	cin >> a >> b;
	cout << "Before change values are : " << a << " : " << b << endl;
	swap(a, b);
	cout << "After change values are : " << a << " : " << b << endl;
}
void swap(int &x, int &y){
	int temp;
	temp = x;
	x = y;
	y = temp;
}
