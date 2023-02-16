#include <stdio.h>
#include <strings.h>

#define DEBUG 0

void printAll(int h1[9][9], int h2[9][9], int h3[9][9])
{
    printf("\nh1:\nliczba:   ");
    for (int j = 0; j < 9; j++) {
        printf("%d ", j+1);
    }
    printf("\n");
    for (int i = 0; i < 9; i++) {
        printf("wiersz %d: ", i+1);
        for (int j = 0; j < 9; j++) {
            printf("%d ", h1[i][j]);
        }
        printf("\n");
    }

    printf("\nh2:\nliczba:   ");
    for (int j = 0; j < 9; j++) {
        printf("%d ", j+1);
    }
    printf("\n");
    for (int i = 0; i < 9; i++) {
        printf("kolumna %d: ", i+1);
        for (int j = 0; j < 9; j++) {
            printf("%d ", h1[i][j]);
        }
        printf("\n");
    }

    printf("\nh3:\nliczba:   ");
    for (int j = 0; j < 9; j++) {
        printf("%d ", j+1);
    }
    printf("\n");
    for (int i = 0; i < 9; i++) {
        printf("kwadrat %d: ", i+1);
        for (int j = 0; j < 9; j++) {
            printf("%d ", h1[i][j]);
        }
        printf("\n");
    }
}

void solve()
{
    int h1[9][9], h2[9][9], h3[9][9];

    // zeruj
    memset(h1, 0, sizeof(h1));
    memset(h2, 0, sizeof(h2));
    memset(h3, 0, sizeof(h3));

    // wczytaj
    int nie = 0;
    for (int i = 0; i < 9; i++)
        for (int j = 0; j < 9; j++)
        {
            int tmp;
            scanf("%d", &tmp);
            if (tmp < 1 || 9 < tmp) {
                if (DEBUG) printf("debug: tmp = %d\n", tmp);   
                nie = 1;
            } else {
                h1[i][tmp-1]++;
                h2[j][tmp-1]++;
                h3[i/3*3+j/3][tmp-1]++;
                if (h1[i][tmp-1] > 1 || h2[j][tmp-1] > 1 || h3[i/3*3+j/3][tmp-1] > 1)
                    nie = 1;
            }
        }
    if (DEBUG) printAll(h1, h2, h3);
    // wypisz
    printf("%s\n", nie ? "NIE" : "TAK");
}

int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
        solve();
}
