//SPOJ submission 18335445 (C++ 4.3.2) plaintext list. Status: AC, problem PP0501A, contest SPOJPL. By filipspychala (Filip), 2016-12-07 19:25:57.
///Zad z polskiego spoja nr 601 - NWD (latwe)
#include<iostream>
using namespace std;
int euklides(int &a, int &b)
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
 
int main()
{
    int a,b,c;
    cin >> c;
    for(; c>0; c--)
    {
        cin >> a >> b;
        cout << euklides(a, b) << endl;
    }
}
 