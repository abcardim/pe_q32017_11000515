#include <stdio.h>

unsigned int soma1n_TR (unsigned int n, unsigned int base){
    printf("Soma1n_TR: n = %d, base = %d\n", n, base);
    if (n==0) {
        printf("Retornando a resposta pro main!\n");
        return base; //esse é o ultimo passo, retorna a resposta que está no base.
    }
    return soma1n_TR(n-1, n+base);
}

unsigned int soma1n (unsigned int n) {
    return soma1n_TR(n, 0); // base = 0, o elemento neutro da soma!
    
}

unsigned int main(){
    unsigned int n;
    scanf("%d", &n);
    printf("%d", soma1n(n));
    return 0;
    
}
/* imagina n = 4
(4,0)
(3,5)
(2,8)
(1,10)
A partir desse ponto, sendo n=1, ele vai voltando para o começo
com base = 10, até retornar no final 10.
*/
