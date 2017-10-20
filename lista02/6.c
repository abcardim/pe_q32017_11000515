#include <stdio.h>
#include <math.h>

//Impressão da resposta
double print(double d, double e, int i)
{
     if ( i==0 ){
         printf("%.2lf %.2lf\n", d+e, d-e);
     } else {
         printf("%.2lf - %.2lfi %.2lf + %.2lfi\n", d,e,d,e);
     }
}

//Calculo do delta;
double calc_delta(double a, double b, double c)
{
    b = pow(b,2);
    b -= 4*a*c;
    return b;
}

int main() {
    double a,b,c,d,e;
    int i=0;
    
    scanf("%lf %lf %lf", &a, &b, &c);
    
    d = -b;
    d /= 2;
    
    e = calc_delta(a,b,c);
    
    if ( e<0 ){
        e = -e;
        i = 1;
    }
    
    e = sqrt(e);
    e /= 2;

    print(d,e,i);

    return 0;
    
/*Verificar qual o formato de resposta pretendido
pelo problema */
}