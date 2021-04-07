//SPOJ submission 27574273 (C) plaintext list. Status: AC, problem PP0602D, contest SPOJPL. By filipspychala (Filip), 2021-03-18 22:42:09.
#include<stdio.h>
 
#include<stdlib.h>
 
 
 
int main() {
 
    int n, k, *arr;
 
    scanf("%d %d", &n, &k);
 
    arr = malloc(sizeof(int)*n);
 
    for (size_t i = n-k; i < n; i++)
 
    {
 
        scanf("%d", &arr[i]);
 
    }
 
    
 
 
 
    for (size_t i = 0; i < n-k; i++)
 
    {
 
        scanf("%d", &arr[i]);
 
    }
 
 
 
    for (size_t i = 0; i < n; i++)
 
    {
 
        printf("%d ", arr[i]);
 
        
 
    }
 
    printf("\n");
 
 
 
    free(arr);    
 
} 