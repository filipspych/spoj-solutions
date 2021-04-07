//SPOJ submission 18335364 (C++ 4.3.2) plaintext list. Status: AC, problem PRZEDSZK, contest SPOJPL. By filipspychala (Filip), 2016-12-07 19:15:54.
///Zadanie z polskiego spoja numer 522 (latwe) - PRZEDSZK
///Tak naprawde zadanie wymaga znalezienia NWW dwoch liczb podanych na wejsciu dla N przypadkow w kazdym liczba a i liczba b (N od 1 do 20) (a,b od 10 do 30)
///OGRANICZONE ZASOBY: Czas 0.144s
///Dane NWW = a*b/NWD; algorytm euklidesa z modulo
#include <iostream>
 
using namespace std;
 
int euklides(int a,int b);
 
int main()
{
    int x,y,N;
    cin >> N;
    for(;N>0; N--)
    {
        cin >> x >> y;
        cout << x*y/euklides(x,y) << endl;
    }
    return 0;
}
 
int euklides(int a, int b)
{
    int c;
    while(true)
    {
        c=a%b;
        a=b;
        b=c;
        if(b==0) return a;
    }
}
 