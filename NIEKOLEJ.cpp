//SPOJ submission 25876539 (CPP14) plaintext list. Status: AC, problem NIEKOLEJ, contest SPOJPL. By filipspychala (Filip), 2020-04-28 19:06:25.
#include <iostream>
using namespace std;
 
void zad() {
	int n;
	cin >> n;
	if (n == 1 || n == 2) {
		cout << "NIE";
	}
	else if (n == 0) {
		cout << "0";
	}else {
		int* a = new int[n+1];
		int p = 1;
		int p2 = 0;
		for (int i = 0; i <= n; i++) {
			if (p <= n) {
				a[i] = p;
				p += 2;
			}
			else {
				a[i] = p2;
				p2 += 2;
			}
			
		}
		for (int i = 0; i <= n; i++) {
			cout << a[i] << " ";
		}
	}
}
 
int main()
{
	zad();
}
 