#include <iostream>
#include <cmath>

using namespace std;

int main (void) {
	int num = 0, rank = 0, digit = 0;
	cout << "Enter a number ";
	cin >> num;
	int num_copy = num;
	do {
		digit = num/pow(10, rank);
		if (!digit) {
			rank--;
			break;
		}
		rank++;
	} while (true);
	cout << num << " = ";
	for (int i = rank; i >= 0; i--) {
		digit = num_copy/pow(10, i);
		cout << digit << "*10^" << i;
		if (i != 0)
			cout << " + ";
		num_copy -= digit*pow(10, i);
	}
	int out;
	cout << endl << "Enter a symbol for quit: ";
	cin >> out ;
	return 0;
}
