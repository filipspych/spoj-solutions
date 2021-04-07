//SPOJ submission 25697284 (C++ 4.3.2) plaintext list. Status: AC, problem JSZYCER, contest SPOJPL. By filipspychala (Filip), 2020-04-04 21:23:31.
#include <iostream>
#include <string>
#include <stdio.h>
#include <ctype.h>
using namespace std;
 
void szyfruj(char *msg) 
{
	while (*msg != '\0')
	{
		if (*msg != ' ' && *msg != '\n')
		{
			*msg += 3;
			if (*msg > 'Z') *msg = *msg - ('Z' + 1) + 'A';
		}
		msg++;
	}
}
 
int main()
{
	char buff[256];
 
	while (fgets(buff, sizeof(buff), stdin)) 
	{
		szyfruj(buff);
		puts(buff);
	}
	char c;
	
	return 0;
} 