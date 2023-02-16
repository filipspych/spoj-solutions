#include<stdio.h>

int main() {
    int arr[999] = {0};
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    char c;
    int k;
    scanf(" %c %d", &c, &k);
    for(int i = 0; i < n; i++) {
        if (c == '>' && arr[i] > k)
            printf("%d\n", arr[i]);
        else if (c == '<' && arr[i] < k)
            printf("%d\n", arr[i]);
    }
}
