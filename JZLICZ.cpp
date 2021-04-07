//SPOJ submission 25888206 (CPP14-CLANG) plaintext list. Status: AC, problem JZLICZ, contest SPOJPL. By filipspychala (Filip), 2020-04-30 15:32:36.
#include <iostream>
#include <string>
using namespace std;
 
void zad() {
	int N;
	cin >> N;
	int ascii[256] = {0};
	cin.ignore();
	while (N--) {
		string line;
		getline(cin, line);
		for (int i = 0; i < line.size(); i++) {
			char c = line[i];
			if (isalnum(c)) {
				ascii[c]++;
			}
		}
	}
	for (int c = 97; c < 256; c++) {
		if (ascii[c] != 0) {
			cout << (char)c << " " << ascii[c];
			cout << endl;
		}		
	}
	for (int c = 0; c < 97; c++) {
		if (ascii[c] != 0) {
			cout << (char)c << " " << ascii[c];
			if (c != 255)cout << endl;
		}
	}
}
 
int main()
{
	zad();
} 