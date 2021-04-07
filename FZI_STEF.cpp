//SPOJ submission 27574334 (C) plaintext list. Status: AC, problem FZI_STEF, contest SPOJPL. By filipspychala (Filip), 2021-03-18 23:23:54.
#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    unsigned int n;
    scanf("%d", &n);
 
    long long sum = 0, max = 0;
    int z;
    for (size_t i = 0; i < n; i++)
    {
        scanf("%d", &z);
        sum += z;
        if (sum > max)
            max = sum;
        if (sum <= 0)
            sum = 0;
    }
 
    printf("%lld\n", max);
    return 0;
}
 