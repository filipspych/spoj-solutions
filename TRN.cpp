//SPOJ submission 25821602 (CPP14-CLANG) plaintext list. Status: AC, problem TRN, contest SPOJPL. By filipspychala (Filip), 2020-04-21 23:51:58.
#include <iostream>
using namespace std;
 
void zad() {
	int m, n;
	cin >> m >> n;
	int** mat = new int* [m];
	for (int row = 0; row < m; row++) {
		mat[row] = new int[n]; 
	}
 
	for (int row = 0; row < m; row++) {
		for (int col = 0; col < n; col++) {
			cin >> mat[row][col];
		}
	}
 
	for (int col = 0; col < n; col++) {
		for (int row = 0; row < m; row++) {
			cout << mat[row][col] << ' ';
		}
		cout << endl;
	}
	
	for (int row = 0; row < m; row++) {
		delete[] mat[row];
	}
	delete[] mat;
}
 
int main()
{
	zad();
} 