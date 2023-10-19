#include <iostream>
#include <string>
using namespace std;

#include "Experiment_1.h"

// Arguments are passed by reference
void CreatePassword(string &password) {
	cout << "Create Password : ";
	getline(cin, password);
}

void EnterPassword(string &input) {
	cout << "Enter Password : ";
	getline(cin, input);
}

bool IsPasswordCorrect(string input, string password) {
	return (input == password);
}

void PasswordFunction() {
	string password, input;
	CreatePassword(password);
	EnterPassword(input);
	string result = (IsPasswordCorrect(input, password)) ? "U GOOD! :)" : "U R AN IDIOT SANDWICH! >:(";
	cout << result << endl;
}
