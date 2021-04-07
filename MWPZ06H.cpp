//SPOJ submission 25876451 (CPP14) plaintext list. Status: AC, problem MWPZ06H, contest SPOJPL. By filipspychala (Filip), 2020-04-28 18:50:28.
#include <iostream>
#include <algorithm>
using namespace std;
 
void zad() {
	int N;
	cin >> N;
	int* a = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}
	sort(a, a + N);
	reverse(a, a + N);
 
	int i = 1;
	if (N > 1) {
		while (i<N && a[i-1]==a[i]) {
			i++;
		}
	}	
	reverse(a + i, a + N);
	
	for (int i = 0; i < N; i++) {
		cout << a[i] << " ";
	}
}
 
int main()
{
	int d;
	cin >> d;
	while (d--) {
		zad();
		if (d != 0) cout << endl;
	}
}
 
 