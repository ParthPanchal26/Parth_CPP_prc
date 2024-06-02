/*Functions overloading*/
#include<iostream>
using namespace std;

void line();
void line(char);
void line(char, int);

int main(){
	line();
	line('=');
	line('-', 5);
	return (0);
}
void line(){
	int i;
	for(i=0;i<5;i++)
		cout << "*";
	cout << endl;
}
void line(char ch){
	int i;
	for(i=0;i<5;i++)
		cout << '=';
	cout << endl;
}
void line(char ch, int n){
	int i;
	for(i=0;i<n;i++)
		cout << '-';
	cout << endl;
}
