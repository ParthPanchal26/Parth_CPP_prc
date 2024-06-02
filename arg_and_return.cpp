/*Argument and return type*/
#include<iostream>
using namespace std;

int sum(int, int);

int main(){
	system("color 0a");
	int p, q;
	cout << "Enter two no. : " << endl;
 	cin >> p >> q;
 	cout << "Sum is : " << sum(p, q) << endl;
 	return 0;
}
int sum(int a, int b){
	
	return a+b;
}
