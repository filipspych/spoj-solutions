//SPOJ submission 18310954 (C++ 4.3.2) plaintext list. Status: AC, problem FLAMASTE, contest SPOJPL. By filipspychala (Filip), 2016-12-04 00:19:32.
///Zadnie numer 506 z polskiego spoja kod: FLAMASTE
#include<string>
#include<iostream>
 
using namespace std;
int main()
{
    int c,pow = 0;
    char p=0, z;
    string s;
    cin>>c;
    for(;c>0;c--)
    {
        p=0; pow=0; z=0;
        s="";
        cin>>s;
        for(int i = 0; i<=s.length(); i++)
        {
            z = s[i];
            if(p == z || p == 0) pow++;
            else if(pow>2){cout << p << pow; pow=1;}
            else if(pow==2){cout << p << p; pow=1; }
            else {cout << p;}
            if(z == 0) break;
            p=z;
        }
        cout << endl;
 
    }
}
 