#include <stdio.h>
#include <time.h>
#include <limits.h>

#define BIGNUM ULONG_MAX

typedef unsigned long int ulint;

//funcao no formato normal
ulint f1 (ulint x, ulint y)
{
    return x>y;
}

//funcao no formato bitwise
ulint f2 (ulint x, ulint y)
{    
    return (((y+((~x)+1)) >> 31) & 1);
}

int main () {
    clock_t tempo_init, tempo_fim;
    double tempo_gasto;

    
    tempo_init = clock();

    for (int i=0; i<BIGNUM-1; i++) {
        f1(i,i++);
    }
/*
    if (f1(num1, num2)) printf("maior = %lu e menor = %lu\n", num1, num2);
    else printf("maior = %lu e menor = %lu\n", num2, num1);
*/
    tempo_fim = clock();
    
    tempo_gasto = (double)(tempo_fim - tempo_init) / CLOCKS_PER_SEC;
    printf("Tempo gasto na versao normal: %lf\n", tempo_gasto);
    
    tempo_init = clock();
    for (int i=0; i<BIGNUM-1; i++) {
        f2(i,i++);
    }
    tempo_fim = clock();
    
    tempo_gasto = (double)(tempo_fim - tempo_init) / CLOCKS_PER_SEC;
    printf("Tempo gasto na versao bitwise: %lf\n", tempo_gasto);
    
    return 0;
    
}