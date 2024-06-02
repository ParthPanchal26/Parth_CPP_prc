#include<iostream>
#include<string>
using namespace std;

int main()
{
	cout << "Welcome to login page." << endl;
	cout << "--------------------------------" << endl;
	string login;
	cout << "\tEnter your email id. " << endl;
	cout << "\t:";
	cin >> login;
	if(login.find("@gmail.com"))
	{
		cout << "Do not this code";
	}
	else
	{
		cout << "Congratultion ......";
	}
	return 0;
}


