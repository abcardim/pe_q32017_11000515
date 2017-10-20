#include <stdio.h>

//Calculo do fatorial, parte 2
unsigned int fatorial_TR(unsigned int x, unsigned int base){
    if (x<2) return 1*base;
    return fatorial_TR(x-1, base*x);
}

//Calculo do fatorial, caudal parte 1
unsigned int fatorial(unsigned int x){
    return fatorial_TR(x, 1);
}

//Calculo do coeficiente binomial
float calc_coef(int n, int k){
    float resultado;
    
    resultado = fatorial(n);
    resultado /= fatorial(k);
    resultado /= fatorial(n-k);
    
    return resultado;
}

int main() {
    unsigned int n, k;
    
    scanf("%u %u", &n, &k);
    
    printf("%.0f\n", calc_coef(n, k));
    return 0;
}