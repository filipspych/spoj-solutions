//SPOJ submission 25845371 (CPP) plaintext list. Status: AC, problem MWPZ06A, contest SPOJPL. By filipspychala (Filip), 2020-04-24 20:31:39.
#include <iostream>
#include <math.h>
 
void zad() {
	double x,y,z;
	std::cin >> x >> y >> z;
	x *= 12;
	y *= 12;
	double c = (-z * y + y + x) / (z - 1);
	std::cout << -round(c);
}
 
int main()
{
	int d;
	std::cin >> d;
	for (int i = 0; i < d; i++) {
		zad();
		if(i<d-1)std::cout<<std::endl;
	}
}
 