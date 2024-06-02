/*Call by value*/
#include<iostream>
using namespace std;

void swap(int, int);
 
int main(){
	int a, b;
	system("color 0a");
	cout << "Enter two numbers : " << endl;
	cin >> a >> b;
	cout << endl << "Before change values are : " << a << " And " << b << endl;
	swap(a, b);
}
void swap(int x, int y){
	int temp;
	temp=x;
	x=y;	
	y=temp;
	cout << endl << "After change values are : " <<x << " And " << y << endl;
}
