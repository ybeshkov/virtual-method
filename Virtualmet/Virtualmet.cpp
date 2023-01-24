#include <iostream>

using namespace std;
int main()
{
	Array Octal(3);
	for (int id = 0; id < Octal.length(); id++) {
		Octal[id] = rand() / 8;
	}
	cout << Octal;

	Array Hex(888);
	for (int id = 0; id < Hex.length(); id++) {
		Hex[id] = rand() / 16;
	}
	cout << Hex;

	Array sum_both = Octal + Hex;
	cout << sum_both;
}
