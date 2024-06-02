/*No argument and no return type*/
#include<iostream>
using namespace std;

void sum();

int main(){
	sum();	
}
 void sum(){
 	system("color 0a");
 	int i, j;
 	cout << "Enter two no. : " << endl;
 	cin >> i >> j;
 	cout << "The sum is : " << i+j << endl;
 }
