//SPOJ submission 18335071 (C++ 4.3.2) plaintext list. Status: AC, problem PA05_POT, contest SPOJPL. By filipspychala (Filip), 2016-12-07 18:29:29.
///Zadanie z polskiego spoja numer 499 kod: PA05_POT - czy umiesz potegowac?
#include<stdio.h>
 
int cyfra(int n, int m)
{
    int cp = m;
    while(n>1)
    {
        n--;
        m *= cp;
        m %= 10;
    }
    return m;
}
 
int cykl(int n)
{
    if(n==9 || n==4) return 2;
    if(n==2 || n==8 || n==7 || n==3) return 4;
    return 1;
}
 
int main()
{
    int d,c;
    int a,b,s;
    scanf("%d", &d);
    for(; d>0; d--)
    {
        scanf("%d %d", &a, &b);
        a%=10;
        if(b==1) {printf("%d\n",a); continue;}
        c = cykl(a);
        b %= c;
        if(b==0) b=c;
        printf("%d\n", cyfra(b,a));
 
    }
}
 