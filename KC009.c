#include<stdio.h>
#include<string.h>

void solve(char str[]) {
    for(int i = strlen(str)-1; i >= 0; i--)
        printf("%c", str[i]);
    printf("\n");
}

int main() {
    char str[1001];
    while(scanf("%s", str) != EOF) 
        solve(str);
}