#include <stdio.h>
#define SAL1 10000.0
#define SAL2 8000.0
#define SAL3 5000.0
#define SAL4 3000.0
#define SAL5 2000.0
#define DMES 20.0
#define HDIA 8.0

enum{DIRETOR = 1, GERENTE, ENGENHEIRO, TECNICO, OPERADOR};

int calc_salario(int c, int desconto, int acrescimo)
{
    int salario = 0;
    switch (c){
        case DIRETOR:
            salario = SAL1;
            break;
        case GERENTE:
            salario = SAL2;
            break;
        case ENGENHEIRO:
            salario = SAL3;
            break;
        case TECNICO:
            salario = SAL4;
            break;
        case OPERADOR:
            salario = SAL5;
            break;
    } return salario-desconto+acrescimo;
}

int calc_acrescimo(int c, int he)
{
    int acrescimo;
    
    switch (c){
        case DIRETOR:
            acrescimo = he *( (SAL1/(DMES*HDIA)) + 40);
            break;
        case GERENTE:
            acrescimo = he *( (SAL2/(DMES*HDIA)) + 40);
            break;
        case ENGENHEIRO:
            acrescimo = he *( (SAL3/(DMES*HDIA)) + 40);
            break;
        case TECNICO:
            acrescimo = he *( (SAL4/(DMES*HDIA)) + 40);
            break;
        case OPERADOR:
            acrescimo = he *( (SAL5/(DMES*HDIA)) + 40);
            break;
    }
    return acrescimo;
}

int calc_desconto(int c, int f)
{
    int desconto = 0;
    
    switch (c){
        case DIRETOR:
            desconto += (SAL1/DMES)*f;
            break;
        case GERENTE:
            desconto += (SAL2/DMES)*f;
            break;
        case ENGENHEIRO:
            desconto += (SAL3/DMES)*f;
            break;
        case TECNICO:
            desconto += (SAL4/DMES)*f;
            break;
        case OPERADOR:
            desconto += (SAL5/DMES)*f;
            break;
    }
    return desconto;
}

int print_hextra(int he)
{
    printf("# horas−extra: %d\n", he);
    return 0;
}

int print_faltas(int f)
{
    printf("# de faltas  : %d\n", f);
    return 0;
}

int print_cargo(int c)
{
    switch (c){
        case DIRETOR:
            printf("cargo        : Diretor\n");
            return 0;
        case GERENTE:
            printf("cargo        : Gerente\n");
            return 0;
        case ENGENHEIRO:
            printf("cargo        : Engenheiro\n");
            return 0;
        case TECNICO:
            printf("cargo        : Técnico\n");
            return 0;
        case OPERADOR:
            printf("cargo        : Operador\n");
            return 0;
    } return 0;
}

int main(){
    int c, f, he, desconto, acrescimo;
    
    scanf("%d %d %d", &c, &f, &he);
    
    print_cargo(c);
    print_faltas(f);
    print_hextra(he);
    
    desconto = calc_desconto(c,f);
    acrescimo = calc_acrescimo(c,he);
    
    printf("descontos    : %d\n", desconto);
    printf("acrescimos   : %d\n", acrescimo);
    printf("salario      : %d\n", calc_salario(c,desconto,acrescimo));
    
    return 0;
}


/*
Formato de saida:

cargo        : Diretor
# de faltas  : %d
# horas−extra: %d
descontos    : %d
acrescimos   : %d
salario      : %d
*/