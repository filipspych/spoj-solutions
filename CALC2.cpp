//SPOJ submission 25821406 (CPP14-CLANG) plaintext list. Status: AC, problem CALC2, contest SPOJPL. By filipspychala (Filip), 2020-04-21 23:04:11.
#include <iostream>
using namespace std;
 
void zad() {
	static int32_t reg[10] = {0};
	int32_t a, b, x;
	char c;
	while (cin >> c) {
		cin >> a >> b;
		if (c != 'z') {
			a = reg[a];
			b = reg[b];
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
		else {
			reg[a] = b;
		}
		
		
	}
}
 
int main()
{
	zad();
}
 