//SPOJ submission 25703867 (CPP) plaintext list. Status: AC, problem PP0504D, contest SPOJPL. By filipspychala (Filip), 2020-04-05 19:12:42.
#include <iostream>
 
int main()
{
	int t;
	std::cin >> t;
	for (int j = 0; j < t; j++) {
		float f;
		std::cin >> f;
		unsigned char* b = (unsigned char*)&f;
		for (int i = 3; i >= 0; i--) {
			std::cout << std::hex << (short)b[i] << ' ';
		}
	}
}
 