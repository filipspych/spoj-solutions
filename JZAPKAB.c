#include<stdio.h>

int mapa(char c) {
    switch(c) {
        case 'a': return 1;
        case 'b': return 2;
        case 'c': return 3;
        case 'd': return 4;
        case 'e': return 5;
        case 'f': return 6;
        case 'g': return 7;
        case 'h': return 8;
        case 'i': return 9;
        case 'k': return 10;
        case 'l': return 20;
        case 'm': return 30;
        case 'n': return 40;
        case 'o': return 50;
        case 'p': return 60;
        case 'q': return 70;
        case 'r': return 80;
        case 's': return 90;
        case 't': return 100;
        case 'x': return 300;
        case 'y': return 400;
        case 'z': return 500;
        default: return 0;
    }
}

int main() {
    char str[26];
    scanf("%s", str);

    int ret = 0;
    for(int i = 0; str[i] != '\0'; i++)
        ret += mapa(str[i]);
    
    printf("%d\n", ret);
}