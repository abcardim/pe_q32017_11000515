#include <stdio.h>

int fatorial(a){
    int resultado=1;
    while ( a>=1 ){
        resultado *= a;
        a--;
    } 
    return resultado;
}

int main(){
    int x;
    scanf("%d", &x);
    printf("%d", fatorial(x));
    return 0;
}