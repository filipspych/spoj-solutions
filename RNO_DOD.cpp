//SPOJ submission 18256830 (CPP14) plaintext list. Status: AC, problem RNO_DOD, contest SPOJPL. By filipspychala (Filip), 2016-11-25 14:11:43.
#include <iostream>
#include <stdio.h>
using namespace std;
int t,t2,tmp,suma;
int main()
{
    scanf("%d", &t);
    for(int i = 0; i < t; i++)
    {
        scanf("%d", &t2);
        for(int i = 0; i < t2; i++)
        {
            scanf("%d", &tmp);
            suma += tmp;
        }
        printf("%d\n", suma);
        suma = 0;
    }
    return 0;
}
 