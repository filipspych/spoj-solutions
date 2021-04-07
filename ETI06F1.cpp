//SPOJ submission 18335799 (C++ 4.3.2) plaintext list. Status: AC, problem ETI06F1, contest SPOJPL. By filipspychala (Filip), 2016-12-07 20:29:01.
///Zadanie ze spoja numer 609
///Matematyczna czesc: Promien obliczanego kola jest mozliwy do obliczenia przy pomocy pitagorasa, poniewaz d/2 jest wysokoscia trojkata a r jego przeciwprostokatna (r jest wiec podstawa)
 
#include<iostream>
#include<math.h>
using namespace std;
 
int main()
{
//    const double PI = 3.141592654; ///PI jest juz zadeklarowane w biblliotece math.h
    double r, d;
    cin.precision(30);
    cout.precision(30);
    cin >> r >> d;
    cout << (pow(r, 2)-(pow(d, 2)/4.0))*M_PI << endl;
    return 0;
 
}
 