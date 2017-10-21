#include <stdio.h>

int palindromo(const char *s)
{
const char *p;

if (!*s) return 0;
for (p = s; *p; p++);
for (--p; s < p; s++, p--) if (*p != *s) break;
return s < p;
}

/* Returna 0 se a string e palindromo, nao-zero caso contrario. */

int main(){
    char s[255];
    
    scanf("%s", s);
    
    if (!palindromo(s)) printf("sim\n");
    else printf("nao\n");
    
    return 0;
}