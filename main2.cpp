#include <iostream>
#include <string>

using namespace std;

int main (void) {
	int sum = 0, digit = 0;
	char flow;
	string str;
	cout << "Enter a string ";
	cin >> str;
	for (int i = 0; i < str.size(); i++) {
		if (isdigit(str[i])) {
			digit++;
			flow = str[i];
			sum += atoi(&flow);
		}
		if (!isdigit(str[i])) {
			cout << (char) tolower(str[i]);
		}
	}
	cout << endl << "The number of digits: " << digit << endl;
	cout << "Sum: " << sum;
	return 0;
}
