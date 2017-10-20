#include <stdio.h>

int produto_interno(int x[], int y[], int n){
    int i, produtoria = 1;
    for (i=0; i<n; i++){
        produtoria += x[i]*y[i];
    }
    return produtoria;
}

int main(){
    int x[2]={2, 2}, y[2]={3,4}, n=2;
    printf("%d\n", produto_interno(x[], y[], n));
    return 0;
}
/*
Professor:
int produto_interno(int x[], int y[], int n){
    int soma = 0;
    int i;
    
    for(i=0; i<n; i++){
        soma += x[i]*y[i];
    }
    return soma;
}


Memoria para funcao (a mais):
int  i 4, int soma 4, int n 4, int x[] 4, int y[] 4.
instrucoes
soma=0 2
int i  1
for i=0 1
i<n n
i++ n
soma += 2n
xi * yi n
return soma 1
TOTAL 5 + 5n ou 5(1+n)

Tenha o habito de tentar contar quantas instrucoes vao ser utilizadas

*/