// é primo?

#include <stdio.h>

unsigned int testeprimo_b(unsigned int n, unsigned int check) {
    printf("n = %d, check = %d\n", n, check);

    if ( check == n-1) return 1;
    if ( n % check == 0) return 0;
    return testeprimo_b(n, check+1);
}

inline  int testeprimo_a(unsigned int n){
    return testeprimo_b(n, 2);
}

unsigned int main (){
    unsigned int n;
    
    scanf("%d", &n);
    
    if ( testeprimo_a(n) == 1 ) {
        printf("É primo!\n");
        return 1;
    }
    printf("Não é primo!\n");
    return 0;
}