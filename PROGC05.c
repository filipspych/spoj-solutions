#include<stdio.h>
#include<ctype.h>

void solve(char str[], char c) {
    int i = 0;
    while(str[i] != '\0') {
        if (str[i] != c) 
            putchar(str[i]);
        i++;
    }
    printf("\n");
}

int main() {
    char str[101], c;
    while(scanf(" %c %s", &c, str) != EOF)
        solve(str, c);
}