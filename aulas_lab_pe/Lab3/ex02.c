#include <stdio.h>

unsigned int num_digitos_b(unsigned long int n, unsigned int l) {
    printf("n = %li, l = %d\n", n, l);
    if ( n<10 ) return l;
    return num_digitos_b(n/10, l+1);
}

unsigned long num_digitos_a(unsigned long int n){
    return num_digitos_b(n, 1);
}

unsigned int main() {
    unsigned long int n;
    
    scanf("%li", &n);
    
    printf("Comprimento = %li", num_digitos_a(n));
    
}