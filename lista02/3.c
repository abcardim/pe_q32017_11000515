#include <stdio.h>
#include <math.h>

int main (){
    double a, a1, b, t, p, pi;
    int i;
    a = 1;
    b = 1/sqrt(2); 
    t = 0.25;
    p = 1;
    
    for (i=0; i<10; i++){
        a1 = (a+b)/2;
        b = sqrt( (a*b) );
        t = t - p*( pow((a-a1),2) );
        p = 2*p;
        a = a1;
    }
    
    pi = ( pow((a+b),2) )/ (4*t);
    
    printf("%.20f\n", pi);
    
    return 0;
/*
Uma precisão arbitrária pode ser impedida
se o usuário entrar com uma precisão desejada n,
que será o número de vezes que a sequÊncia principal
será repetida no 'for', aumentando a precisão do resultado
até o nivel desejado.
*/
}