//SPOJ submission 25807808 (C++ 4.3.2) plaintext list. Status: AC, problem ROWNANIE, contest SPOJPL. By filipspychala (Filip), 2020-04-20 04:27:35.
#include <iostream>
#include <string>
using namespace std;
 
void test(double a, double b, double c) {
	double d = b * b - 4 * a * c;
	if (d > 0)
		cout << 2;
	else if (d == 0)
		cout << 1;
	else cout << 0;
	cout <<	endl;
}
 
int main()
{
	double a, b, c;
	while (cin >> a)
	{
		cin >> b;
		cin >> c;
		test(a, b, c);
	}
}
 