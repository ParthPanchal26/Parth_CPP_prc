/*Inline function*/
#include<iostream>
using namespace std;

inline int add(int a, int b){
	return a+b;
}
inline int sub(int c, int d){
	return c-d;
}
inline int mul(int e, int f){
	return e*f;
}
inline float div(int g, int h){
	return g/h;
}
int main(){
	system("color 0A");
	int A, B;
	cout << "Addition : Subtraction : multiplication : division ................ : " << endl;
	cout << "Enter two No. : " << endl;
	cin >> A >> B;
	cout << "Addition is       : " << add(A, B) << endl;
	cout << "Subtraction is    : " << sub(A, B) << endl;
	cout << "Multiplication is : " << mul(A, B) << endl;
	cout << "Division is       : " << div(A, B) << endl;
}
