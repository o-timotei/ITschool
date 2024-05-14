#include <iostream>
using namespace std;

int main() {

	int an;
	cin >> an;

	if (an % 400 == 0 || (an % 4 == 0 && an % 100 != 0)) {
		cout << an << "este bisect";
	}
	else
	{
		cout << an << "nu este bisect";
	}

}