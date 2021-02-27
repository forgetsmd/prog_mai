#include <iostream>
#include <string>

using namespace std;

int main (void) {
	int sum = 0, digit = 0;
	string str;
	cout << "Enter a string ";
	cin >> str;
	for (int i = 0; i < str.size(); i++) {
		if (isdigit(str[i])) {
			digit++;
			sum += atoi(&str[i]);
		}
		else {
			cout << (char) tolower(str[i]);
		}
	}
	cout << "The number of digits: " << digit << endl;
	cout << "Sum: " << sum;
	int out;
	cout << endl << "Enter a symbol for quit: ";
	cin >> out ;
	return 0;
}
