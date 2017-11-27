#include <stdio.h>
#include <stdlib.h>

typedef struct Cronometro {
    unsigned int minuto;
    unsigned int segundo;
    unsigned int decimos;
    char sinal;
} Cronometro;

Cronometro converte (int decimos) {

    Cronometro d;
      
    d.decimos = decimos%100;
    decimos -= decimos%100;
    decimos /= 100;
    d.segundo = decimos%60;
    decimos -= decimos%60;
    decimos /= 60;
    d.minuto = decimos;
    
    return d;

}

Cronometro diferenca (Cronometro *a, Cronometro *b) {

    Cronometro d;
    int decimos1=0, decimos2=0, resultado=0;

    decimos1 += a->minuto*6000;
    decimos1 += a->segundo*100;
    decimos1 += a->decimos;
    
    decimos2 += b->minuto*6000;
    decimos2 += b->segundo*100;
    decimos2 += b->decimos;

    resultado = decimos2 -  decimos1;
    
    d.sinal='\0';
    
    if (resultado<0) {
        d.sinal='-';
        resultado *= -1;
    }
        
    d=converte(resultado);
    
    return d;

}

int main () {

    Cronometro *a, *b, dif;
    a = malloc(sizeof(Cronometro));
    b = malloc(sizeof(Cronometro));

    scanf("%dm %ds %d", &(a->minuto), &(a->segundo), &(a->decimos));
    scanf("%dm %ds %d", &(b->minuto), &(b->segundo), &(b->decimos));

    dif = diferenca(a, b);
    
    printf("%c%dm %ds %d\n", dif.sinal, dif.minuto, dif.segundo, dif.decimos);
    
    free(a);
    free(b);

    return 0;
}