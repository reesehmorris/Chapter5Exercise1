#include <iostream>
using namespace std;

int main() {
	int count = 0;
	for (int code = 32; code <= 127; code++) {
		cout << static_cast<char>(code);
		count++;

		if (count == 16) {
			cout << endl;
			count = 0;
		}
		else {
			cout << " ";
		}
	}
	return 0;
}
