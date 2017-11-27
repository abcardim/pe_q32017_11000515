#include <stdio.h>
#include <time.h>
#include <limits.h>

#define BIGNUM ULONG_MAX

typedef unsigned long int ulint;

//funcao no formato normal
ulint f1 (ulint x)
{
    int sum = 0;
    
    while (x >= 1) {
        sum += x%2;
        x /= 2;
    }
    
    return sum;
}

//funcao no formato bitwise
ulint f2 (ulint x)
{
    ulint sum = 0;
    
    while (x >= 1) {
        sum += x&1;
        x >>= 1;
    }
    
    return sum;
}

int main () {
    clock_t tempo_init, tempo_fim;
    double tempo_gasto;
    //ulint soma = 0;
    
    tempo_init = clock();

    for (int i=0; i<(BIGNUM/10000000); i++) {
        f1(i);
    }

    tempo_fim = clock();
    
    tempo_gasto = (double)(tempo_fim - tempo_init) / CLOCKS_PER_SEC;
    printf("Tempo gasto na versao normal: %lf\n", tempo_gasto);
    
    //soma = 0;
    tempo_init = clock();
    
    for (int i=0; i<(BIGNUM/10000000); i++) {
        f2(i);
    }
    
    tempo_fim = clock();
    
    tempo_gasto = (double)(tempo_fim - tempo_init) / CLOCKS_PER_SEC;
    printf("Tempo gasto na versao bitwise: %lf\n", tempo_gasto);
    
    return 0;
    
}