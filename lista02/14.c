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

int inverte( int n , int a , int resp)
{
    return ( n/10 , )
}

int main(){
    //char s[255];
    //scanf("%s", s);
    //if (!palindromo(s)) printf("sim\n");
    int n;
    
    scanf("%d", &n);
    
    if ( n == inverte(n) ) printf("sim\n");
    else printf("nao\n");
    
    return 0;
}

// palindromo prof

int palindrome(int x)
{
    return (x==inverte(X));
}

int inverte (int x, int inv)
{
    if (x==0) return inv;
    return inverte (x/10, inv*10 + x%10);
}

no std::cin >> 
c ? x:y ;
se parametro c for verdadeiro, retorna x, se nao y.