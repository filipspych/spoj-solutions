#include <stdio.h>
#include <string.h>

void solve(char a[], char r[], char b[]) 
{
    int lendiff = strlen(a) - strlen(b);
    int ret = 0;
    switch (r[0])
    {
    case '=':
        ret = strcmp(a, b) == 0;
        break;
    case '!':
        ret = strcmp(a, b) != 0;
        break;
    case '>':
        if (lendiff > 0)
            ret = 1;
        else if (lendiff < 0)
            ret = 0;
        else
            ret = strcmp(a, b) >= 0;
        break;
    case '<':
        if (lendiff < 0)
            ret = 1;
        else if (lendiff > 0)
            ret = 0;
        else
            ret = strcmp(a, b) <= 0;
        break;
    }
    printf("%d\n", ret);
}

int main()
{
    char a[1001], r[3], b[1001];
    while (scanf("%s %s %s", a, r, b) != EOF)
        solve(a, r, b);
}