//SPOJ submission 18214097 (CPP14) plaintext list. Status: AC, problem PTROL, contest SPOJPL. By filipspychala (Filip), 2016-11-19 00:53:11.
///Zadanie numer 723 z angielskiego spoja - kod PTROL
#include<stdio.h>
 
int lc,lt,x,ost;
int main()
{
    scanf("%d", &lc);
    for(int i = 0; i<lc; i++)
    {
        scanf("%d", &lt);
        scanf("%d", &ost);
        for(int l = 1; l<lt; l++)
        {
            scanf("%d",&x);
            printf("%d ",x);
        }
        printf("%d\n", ost);
    }
}
 