//SPOJ submission 27574302 (C) plaintext list. Status: AC, problem JHTMLLET, contest SPOJPL. By filipspychala (Filip), 2021-03-18 23:05:00.
#include <stdio.h>
#include <stdlib.h>
 
char ltu(char c)
{
    if (c <= 'z' && c >= 'a')
        return c + 'A' - 'a';
    else
        return c;
}
 
int main()
{
    char c;
    int up = 0;
    while (scanf("%c", &c) != EOF)
    {
        if (c == '<')
        {
            up = 1;
        }
        else if (c == '>')
        {
            up = 0;
        }
 
        if (up == 1)
        {
            c = ltu(c);
        }
 
        printf("%c", c);
    }
}
 