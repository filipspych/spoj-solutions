//SPOJ submission 27574298 (C) plaintext list. Status: AC, problem JSPACE, contest SPOJPL. By filipspychala (Filip), 2021-03-18 23:00:42.
#include<stdio.h>
#include<stdlib.h>
 
char ltu(char c) 
{
    if (c <= 'z' && c >= 'a')
        return c + 'A' - 'a';
    else return c;
}
 
int main() {
    char c;
    int up = 0;
    while(scanf("%c", &c) != EOF)
    {
        if (c == ' ') {
            up = 1;
            continue;
        }
    
        if (up == 1) {
            up = 0;
            c = ltu(c);
        }
 
        printf("%c", c);       
    }
} 