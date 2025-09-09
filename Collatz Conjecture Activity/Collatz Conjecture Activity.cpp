#include <iostream>
#include <limits>
#include <cctype>

using namespace std;

int main() {
	char repeat;
	int num;

	do {
		cout << "Enter a Number: ";
		cin >> num;

		cout << num; //First Number

		while (num != 1) {
			if (num % 2 == 0) { //Even
				num = num / 2;
			}
			else { //Odd
				num = num * 3 + 1;
			}
			cout << " -> " << num;
		}
		cout << endl;

		cout << "Enter another Number? (y/n): ";
		cin >> repeat;
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	} while (tolower(repeat) == 'y');

	cout << "Thank you for using the Collatz Conjecture Activity\n";
	return 0;
}
