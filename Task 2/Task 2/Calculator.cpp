#include <iostream>
using namespace std;

int main()
{
	char op;
	float num1, num2;

	// It allows user to enter operator
	// i.e. +, -, *, /
	cout<<"Enter the operator(+ for addition, - for subtraction, * for multiplication and / for division)"<<endl;
	cin >> op;
	
	cout<<"Enter the first number"<<endl;
	cin >> num1;
	cout<<"Enter the second number"<<endl;
	cin>> num2;

	switch (op) {
	case '+':
		cout << num1 + num2;
		break;

	case '-':
		cout << num1 - num2;
		break;

	case '*':
		cout << num1 * num2;
		break;

	case '/':
		cout << num1 / num2;
		break;

	// If the operator is other than +, -, * or /,
	// error message will display
	default:
		cout << "Error! operator is not correct";
	}

	return 0;
}

