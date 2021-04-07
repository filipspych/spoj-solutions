//SPOJ submission 25821341 (CPP14-CLANG) plaintext list. Status: AC, problem CALC, contest SPOJPL. By filipspychala (Filip), 2020-04-21 22:55:56.
#include <iostream>
using namespace std;
 
void zad() {
	int32_t a, b, x;
	char c;
	while (cin >> c) {
		cin >> a >> b;
		switch (c) {
		case '+': x = a + b;
			break;
		case '-': x = a - b;
			break;
		case '*': x = a * b;
			break;
		case '/': x = a / b;
			break;
		case '%': x = a % b;
			break;
		}
		cout << x << endl;
	}
}
 
int main()
{
	zad();
}
 