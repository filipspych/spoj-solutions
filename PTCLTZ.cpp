//SPOJ submission 25763658 (C++ 4.3.2) plaintext list. Status: AC, problem PTCLTZ, contest SPOJPL. By filipspychala (Filip), 2020-04-14 14:01:32.
#include <iostream>
 
void test() {
	int x;
	std::cin >> x;
	int n = 0;
	while (x != 1) {
		x = (x % 2 == 0) ? x / 2 : 3 * x + 1;
		n++;
	}
	std::cout << n << std::endl;
}
 
int main()
{
	int t;
	std::cin >> t;
	for (int i = 0; i < t; i++) {
		test();
	}
} 