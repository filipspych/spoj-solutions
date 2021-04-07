//SPOJ submission 18304341 (C++ 4.3.2) plaintext list. Status: AC, problem FCTRL3, contest SPOJPL. By filipspychala (Filip), 2016-12-02 22:21:25.
#include<stdio.h>
///Zadanie z polskiego spoja numer 496 kod: FCTRL3
void silnia();
int n,d;
int main()
{
    scanf("%d", &d);
    for(;d>0;d--)
    {
        scanf("%d", &n);
        if(n<=1)
        {
            printf("0 1\n");
            continue;
        } else if(n>=10)
        {
            printf("0 0\n");
            continue;
        }
        silnia();
    }
}
 
void silnia()
{
    for(int i = n-1; 0<i; i--)
    {
        n*=i;
    }
    printf("%d %d\n",(n%100)/10,n%10);
}
 