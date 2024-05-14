#include <iostream>
using namespace std;

//int main() {
//
//	int an;
//	cin >> an;
//
//	if (an % 400 == 0 || (an % 4 == 0 && an % 100 != 0)) {
//		cout << an << " este bisect";
//	}
//	else
//	{
//		cout << an << " nu este bisect";
//	}
//}

//int main() {
//	int n = 5;
//	int n_fact = 1 * 2 * 3 * 4 * 5;
//  cout << n_fact;
//}

//int main() {
//	bool n;
//	n = (100 > 0) || (50 < 10);
//	cout << n;
//  n = (100 > 0) && (50 < 10);
//}

int main() {
	int rezultat = 0;
	int expresie = 10 + 10;

	int a = expresie += 1;
	int b = expresie -= 1;
	int c = expresie *= 5;
	int d = expresie /= 2;

	cout << "//   a = " << a << "   //   b = " << b << "   //   c = " << c << "   //   d = " << d << "   //";

}