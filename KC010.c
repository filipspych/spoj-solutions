#include<stdio.h>
#include<ctype.h>

/// @return 0 - ends in space; 1 - ends in newline;
int eatToken() {
    char c;
    while((c = getchar()) != EOF && !isspace(c));
    if (c == '\n') return 1;
    return 0;
}

int main() {
    int n = 0, w = 0;
    char c;
    while((c = getchar()) != EOF){
        if (isdigit(c)) n++;
        else w++;
        
        if (eatToken()) {
            printf("%d %d\n", n, w);
            n = w = 0;
        }
    } 
}