//SPOJ submission 18335878 (C++ 4.3.2) plaintext list. Status: AC, problem PP0502B, contest SPOJPL. By filipspychala (Filip), 2016-12-07 20:44:34.
///Zadanie ze spoja nr 606 (latwe)
///Na czas: start 20:33
#include<iostream>
using namespace std;
 
int main()
{
    int t, n, x;
    int *tab;
    cin >> t;
    for(;t>0;t--)
    {
        cin >> n;
        tab = new int[n];
        int cp = n;
        for(;n>0;n--)
        {
            cin >> tab[n-1];
        }
        for(; n<cp; n++)
        {
            cout << tab[n] << " ";
        }
        cout << endl;
    }
 
}
 