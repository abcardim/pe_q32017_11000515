#include <stdio.h>

unsigned int soma1n (unsigned int n){
    if (n==1) return 1;
    return n+soma1n(n-1); // diferenca entre --n e n--
}

unsigned int main(){
    unsigned int n;
    scanf("%d", &n);
    printf("%d\n", soma1n(n));
    return 0;
}