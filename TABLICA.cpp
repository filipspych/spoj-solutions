//SPOJ submission 25821297 (CPP14-CLANG) plaintext list. Status: AC, problem TABLICA, contest SPOJPL. By filipspychala (Filip), 2020-04-21 22:48:56.
#include <iostream>
 
void zad() {
	int buff[4096];
	int i = 0;
	while (std::cin >> buff[i]) {
		i++;
	}
	i--;
	while (i >= 0) {
		std::cout << buff[i] << " ";
		i--;
	}
}
 
int main()
{
	zad();
}
 