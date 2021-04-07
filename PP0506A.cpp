//SPOJ submission 25737529 (CPP) plaintext list. Status: AC, problem PP0506A, contest SPOJPL. By filipspychala (Filip), 2020-04-10 16:26:43.
#include <iostream>
#include <string>
#include <math.h>
#include <fstream>
using namespace std;
 
//fstream output("test.txt");
 
struct P {
	string s;
	double x = 0, y = 0;
};
 
void operator<<(ostream& out, P p) {
	out << p.s << " " << p.x << " " << p.y << endl;
}
 
bool operator<(P a, P b) {
	return sqrt(a.x * a.x + a.y * a.y) < sqrt(b.x * b.x + b.y * b.y);
	//return abs(a.x) + abs(a.y) < abs(b.x) + abs(b.y);
}
 
void test() {
	int n ;
	cin >> n;
	P *p = new P[n];
	for (int i = 0; i < n; i++) {
		cin >> p[i].s >> p[i].x >> p[i].y;
	}
 
	for (int pierwszy = 0; pierwszy < n; pierwszy++) {
		for (int sprawdzaj = n - 1; sprawdzaj > pierwszy; sprawdzaj--) {
			if (p[sprawdzaj] < p[sprawdzaj - 1]) {
				P tmp = p[sprawdzaj - 1];
				p[sprawdzaj - 1] = p[sprawdzaj];
				p[sprawdzaj] = tmp;
			}
		}
	}
	
	for (int i = 0; i < n; i++) {
		cout << p[i];
	}
	cout << endl;
 
	//for (int i = 0; i < n; i++) {
	//	output << p[i];
	//}
	//output << endl;
}
 
int main()
{	
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		test();
	}
	//output.flush();
	//output.close();
}
 
 