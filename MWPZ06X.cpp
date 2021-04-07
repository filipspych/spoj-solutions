//SPOJ submission 25845174 (CPP) plaintext list. Status: AC, problem MWPZ06X, contest SPOJPL. By filipspychala (Filip), 2020-04-24 20:07:05.
#include <iostream>
 
void zad() {
	int X;
	std::cin >> X;
	std::cout << X * X;
}
 
int main()
{
	int D;
	std::cin >> D;
	for (int i = 0; i < D; i++) {
		zad();
		if (i < D - 1) {
			std::cout << std::endl;
		}
	}
} 