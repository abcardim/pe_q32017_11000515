#include <stdio.h>
#include <math.h>

int fatorial(int x){
    int resultado=1;
    while(x>=1)
    {
        resultado *= x;
        x--;
    }
    return resultado;
}

double inverte_num(double x){
    return 1/x;
}

int main(){
    int k, i;
    double num2, den2, res_serie=0, res_igualdade;
    
    scanf("%d", &k);
    
    for(i=0; i<=k; i++){
        num2 = (fatorial(4*i))*(1103+26390*i);
        den2 = pow(fatorial(i),4)*pow(396,(4*i));
        res_serie += num2/den2;
    }
    
    res_igualdade = ((2*sqrt(2))/9801)*res_serie;
    
    printf("%.50lf\n", inverte_num(res_igualdade));
    
    return 0;
}