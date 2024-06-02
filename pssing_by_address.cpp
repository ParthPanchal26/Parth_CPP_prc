/*Passing by address*/
#include<iostream>
using namespace std;

int swap(int*, int*);
 
int main(){
	int a, b;
//	system("color 0a");
	cout << "Enter two numbers : " << endl;
	cin >> a >> b;
	cout << endl << "Before change values are : " << a << " And " << b << endl;
	swap(&a,&b);
	cout << endl << "After change values are : " << a << " And " << b << endl;
}
int swap(int *x, int *y){
	int temp;
	temp=*x;
	*x=*y;	
	*y=temp;
}
