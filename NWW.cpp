//SPOJ submission 18336148 (C++ 4.3.2) plaintext list. Status: AC, problem NWW, contest SPOJPL. By filipspychala (Filip), 2016-12-07 21:38:53.
///Zadanie z polskiego spoja numer 747 - srednie
///NWW2
///Start 20:53
///21:13 - bledna odpowiedz - przerwa
///21:34 - powrot
///21: 
#include<iostream>
typedef unsigned long long ull;
 
using namespace std;
 
ull NwwEuklidesa(ull a, ull b)
{
    ull c, ca = a, cb = b;
    while(true)
    {
        c = a%b;
        a = b;
        b = c;
        if(b==0)return cb*(ca/a);
    }
}
 
int main()
 {
     ull t, u, a, b = 1;
     cin >> t;
     for(; t>0; t--)
     {
        b = 1;
        cin >> u;
        for(; u>0; u--)
        {
            cin >> a;
            b = NwwEuklidesa(a,b);
        }
        cout << b << endl;
     }
 }
 