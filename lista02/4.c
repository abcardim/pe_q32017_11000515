#include <stdio.h>
#include <math.h>

int main (){
    char o;
    float x, y;
    
    scanf("%c %f %f", &o, &x, &y);
    
    switch(o){
        case '1' :
            printf("%.0f\n", x+y);
            break;
        case '2' :
            printf("%.0f\n", x-y);
            break;
        case '3' :
            printf("%.0f\n", x*y);
            break;
        case '4' :
            printf("%.0f\n", x/y);
            break;
        case '5' :
            printf("%.0f\n", pow(x,y));
            break;
    }
    
    return 0;

/* Aqui, foi utilizado o commando switch como estudo.
Porém, no switch a variável é testada para todos os casos.
Isso significa que o for, for else potencioalmente melhor 
pois caso seja selecionado uma das primeiras operações, 
já para por aí.
*/
}