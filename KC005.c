#include<stdio.h>
#include<ctype.h>

#define DEBUG 0

int isImiePoprawne(char imie[]) {
    if (!isupper(imie[0])) return 0;
    int i = 1;
    while (imie[i] != ';') if (!islower(imie[i++])) return 0;
    return 1;
}

int isNazwiskoPoprawne(char nazwisko[]) {
    if (!isupper(nazwisko[0])) return 0;
    int i = 1;
    while (nazwisko[i] != ';') if (!islower(nazwisko[i++])) return 0;
    return 1;
}

int isRokPoprawny(char rok[]) {
    if (!isdigit(rok[0]) || !isdigit(rok[1]) || !isdigit(rok[2]) || !isdigit(rok[3])) return 0;
    int r;
    sscanf(rok, "%d", &r);
    if (r < 1900 || r > 2000) return 0;
    return 1;
}

int isMiesiacPoprawny(char miesiac[]) {
    if (!isdigit(miesiac[0]) || !isdigit(miesiac[1])) return 0;
    int m;
    sscanf(miesiac, "%d", &m);
    if (m < 1 || m > 12) return 0;
    return 1;
}

int isDzienPoprawny(char dzien[]) {
    if (!isdigit(dzien[0]) || !isdigit(dzien[1])) return 0;
    int d;
    sscanf(dzien, "%d", &d);
    if (d < 1 || d > 31) return 0;
    return 1;
}

int solve(char imie[], char nazwisko[], char rok[], char miesiac[], char dzien[]) {
    if (!isImiePoprawne(imie)) return 0;
    if (!isNazwiskoPoprawne(nazwisko)) return 1;
    if (!isRokPoprawny(rok)) return 2;
    if (!isMiesiacPoprawny(miesiac)) return 2;
    if (!isDzienPoprawny(dzien)) return 2;
    return 3;
}

int main() {
    char imie[12], nazwisko[22], rok[5], miesiac[3], dzien[3];
    int input ;
    while (EOF != scanf("%*s %s %*s %s %*s %*s %4s-%2s-%2s", imie, nazwisko, rok, miesiac, dzien)) {
        if (DEBUG) printf("%s %s %s %s %s\n", imie, nazwisko, rok, miesiac, dzien);
        printf("%d\n", solve(imie, nazwisko, rok, miesiac, dzien));
    }
}