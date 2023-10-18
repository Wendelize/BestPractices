// 2023-10-18
#include <iostream>
#include <string>
using namespace std;

int main() {
	string password;
	cout << "Create a password : ";
	getline(cin, password);



	string in;
	cin >> in;
	string out = (in == password) ? "U GOOD" : "U R AN IDIOT SANDWISH";
	cout << out << endl;
}