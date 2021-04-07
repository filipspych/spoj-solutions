//SPOJ submission 18953734 (CPP) plaintext list. Status: AC, problem POTEGA, contest SPOJPL. By filipspychala (Filip), 2017-03-12 19:25:20.
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
 
int tablica[3000];
 
int potega10(char indeksPotegi)
{
    int ret = 10;
    if (indeksPotegi==0) ret = 1;
    while(indeksPotegi > 1)
    {
        indeksPotegi--;
        ret*=10;
    }
    return ret;
}
 
int cyfraOdPrawej(int liczba, char numerCyfryOdZera)
{
    liczba %= potega10(numerCyfryOdZera+1);
    liczba /= potega10(numerCyfryOdZera);
    return liczba;
 
}
 
///podaje liczbe cyfr w liczbie (jesli liczba jest rowna zero, wowczas funkcja zwaraca zero)
///liczba musi byc nieujemna
char ileCyfr(int liczba)
{
    char ret = 0;
    while(true)
    {
        if(liczba==0) return ret;
        else ret++;
        liczba/=10;
    }
}
///komorka ktorej zbyt duza wartosc zostanie przeniesiona na wiecej znaczace komorki (w lewo)
void dodaj(int komorka)
{
    int x = tablica[komorka];
    x/=10;///odcinam cyfre, ktora zostala w komorce
    tablica[komorka]%=10; ///odcinam liczby, ktore zostana przeniesione dalej
    if(x==0) return;
    tablica[komorka+1]+=x;
    dodaj(komorka+1);
}
int ileCyfrWTablicy()
{
    int ret = 0;
    for(int i = 3001; i>0; i--){
        if(tablica[i-1]!=0) return 3001 - ret;
        ret++;
    }
    return 3001 - ret;
}
 
void pomnozTablice(int n)
{
    for(int i = ileCyfrWTablicy(); i>0; i--)
    {
        tablica[i-1]*=n;
        dodaj(i-1);
    }
}
 
int main()
{
    int x,y,nX;
    string str = "";
    cin >> x >> y;
    if(y==0){ cout << 1; return 0;}
    if(x==0){ cout << 0; return 0;}
    nX = ileCyfr(x);
    for(int i = 0; i<nX; i++)
    {
        tablica[i] = cyfraOdPrawej(x, i);
    }
    for(;y>1;y--)
    {
        pomnozTablice(x);
    }
    int tmp2 = 3001, d = 0;
    stringstream ss;
    while(tmp2>0)
    {
        tmp2--;
        if(tablica[tmp2]!=0) d = 1;
        if(d == 1)
        {
            ss << tablica[tmp2];
        }
    }
    cout << ss.str();
}
 