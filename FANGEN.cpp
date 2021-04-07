//SPOJ submission 25792623 (C++ 4.3.2) plaintext list. Status: AC, problem FANGEN, contest SPOJPL. By filipspychala (Filip), 2020-04-18 03:47:53.
#include <iostream>
using namespace std;
char** wiatraczekJednostkowy() {
	char** ret = new char*[2];
	ret[0] = new char[2];
	ret[1] = new char[2];
	ret[0][0] = '*';
	ret[1][0] = '*';
	ret[0][1] = '*';
	ret[1][1] = '*';
	return ret;
}
 
char** wiatraczekPrawoskretny(int n) {
	if (n == 1) return wiatraczekJednostkowy();
	char** ret = new char* [2 * n];
	for (int i = 0; i < 2 * n; i++) {
		ret[i] = new char [2 * n];
	}
	char** prev = wiatraczekPrawoskretny(n - 1);
	for (int r = 0; r < 2 * n; r++) {
		for (int c = 0; c < 2 * n; c++) {
			char ch;
			if (r == 0) {
				if (c == 0 || c == 2 * n - 1)  ch = '*';
				else if(c <= (n - 1)) ch = '*';
				else ch = '.';
			}
			else if (r == 2 * n - 1) {
				if (c == 0 || c == 2 * n - 1)  ch = '*';
				else if (c <= (n - 1)) ch = '.';
				else ch = '*';
			}
			else {
				if (c == 0) {
					if (r <= (n - 1)) ch = '.';
					else ch = '*';
				}
				else if (c == 2 * n - 1) {
					if (r <= (n - 1)) ch = '*';
					else ch = '.';
				}
				else {
					ch = prev[r-1][c-1];
				}
			}
			ret[r][c] = ch;
		}
	}
	//dealokacja pamieci podwiatraczka
	for (int i = 0; i < 2 * (n - 1); i++) {
		delete[] prev[i];
	}
	delete[] prev;
	return ret;
}
 
char** wiatraczekLewoskretny(int n) {
	if (n == 1) return wiatraczekJednostkowy();
	char** ret = new char* [2 * n];
	for (int i = 0; i < 2 * n; i++) {
		ret[i] = new char[2 * n];
	}
	char** prev = wiatraczekLewoskretny(n - 1);
	for (int r = 0; r < 2 * n; r++) {
		for (int c = 0; c < 2 * n; c++) {
			char ch;
			if (r == 0) {
				if (c == 0 || c == 2 * n - 1)  ch = '*';
				else if (c <= (n - 1)) ch = '.';
				else ch = '*';
			}
			else if (r == 2 * n - 1) {
				if (c == 0 || c == 2 * n - 1)  ch = '*';
				else if (c <= (n - 1)) ch = '*';
				else ch = '.';
			}
			else {
				if (c == 0) {
					if (r <= (n - 1)) ch = '*';
					else ch = '.';
				}
				else if (c == 2 * n - 1) {
					if (r <= (n - 1)) ch = '.';
					else ch = '*';
				}
				else {
					ch = prev[r - 1][c - 1];
				}
			}
			ret[r][c] = ch;
		}
	}
	//dealokacja pamieci podwiatraczka
	for (int i = 0; i < 2 * (n - 1); i++) {
		delete[] prev[i];
	}
	delete[] prev;
	return ret;
}
 
void zad(int r) {
	char** w;
	if (r < 0) {
		r *= -1;
		w = wiatraczekPrawoskretny(r);
	}
	else {
		w = wiatraczekLewoskretny(r);
	}
	for (int row = 0; row < 2 * r; row++) {
		for (int c = 0; c < 2 * r; c++) {
			cout << w[row][c];
		}
		cout << endl;
	}
	//dealokacja pamieci wiatraczka
	for (int i = 0; i < 2 * r; i++) {
		delete[] w[i];
	}
	delete[] w;
	cout << endl;
}
 
int main()
{
	int r;
	cin >> r;
	while (r != 0) {
		zad(r);
		cin >> r;
	}
} 