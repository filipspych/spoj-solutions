//SPOJ submission 25776131 (CPP) plaintext list. Status: AC, problem EUCGAME, contest SPOJPL. By filipspychala (Filip), 2020-04-15 21:33:43.
#include <iostream>
 
int gcd(int a, int b)
{
	if (a == 0)
		return b;
	return gcd(b % a, a);
}
 
void test() {
	int a, b;
	std::cin >> a >> b;
	std::cout << 2*gcd(a,b) << std::endl;
}
 
int main()
{
	int t;
	std::cin >> t;
	for (int i = 0; i < t; i++) test();
}
 