//SPOJ submission 25843008 (CPP14-CLANG) plaintext list. Status: AC, problem SYS, contest SPOJPL. By filipspychala (Filip), 2020-04-24 15:55:50.
#include <iostream>
#include <string.h>
 
std::string toBase(int base, int n) {
	if (n == 0) return "0";
	const char* p = "0123456789ABCDEF";
	std::string ret = "";
	while (n>0) {
		ret = p[n % base] + ret;
		n /= base;
	}
	return ret;
}
 
void zad(){
	int n;
	std::cin >> n;
	std::cout << toBase(16,n) << " " << toBase(11,n) << std::endl;
}
 
int main()
{
	int t;
	std::cin >> t;
	for(int i=0;i<t;i++){
		zad();
	}	
}
 