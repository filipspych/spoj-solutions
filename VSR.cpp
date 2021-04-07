//SPOJ submission 25821513 (CPP14-CLANG) plaintext list. Status: AC, problem VSR, contest SPOJPL. By filipspychala (Filip), 2020-04-21 23:28:11.
#include <iostream>
 
void zad() {
	double a, b;
	std::cin >> a >> b;
	std::cout << (2*a)/(1+(a/b)) << std::endl;
}
 
int main()
{
	int t;
	std::cin >> t;
	for (int i = 0; i < t; i++) {
		zad();
	}
 
}
 