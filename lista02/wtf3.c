#include <stdio.h>
#include <math.h>

int main (){
    double t;
    t = 1/4;
    
    printf("t = %.4f\n", t);
    
    return 0;
    
/* Por mais que esteja explícito t = 1/4,
t continua tendo o valor 0,000000...
Necessário averiguar o porquê */
}