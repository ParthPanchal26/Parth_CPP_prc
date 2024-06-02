/*No argument and return type*/
#include<iostream>
using namespace std;

int sum();

int main(){
	int c;
	c=sum();
	cout << "Sum is : " << c << endl;
}
int sum(){
	system("color 0a");
	int p, q;
	cout << "Enter two no. : " << endl;
 	cin >> p >> q;
 	return p+q;
}
