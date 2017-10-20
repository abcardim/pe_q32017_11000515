#include <stdio.h>
#include <math.h>

//calculo Decimal para Binario caudal
unsigned int calc_d_b_TR(unsigned int x, int multi, int resp){
    if( x==0 ) return resp;
    return calc_d_b_TR(x/2, 10*multi, resp+x%2*multi);
}

//calculo Decimal para Binario
unsigned int calc_d_b(unsigned int x)
{
    return calc_d_b_TR(x, 1, 0);
}

//calculo Binario para Decimal caudal
unsigned int calc_b_d_TR(unsigned int x, int multi, int resp)
{
    if ( x==0 ) return resp;
    if ( x%2==1 ) resp += pow(2,multi);
    return calc_b_d_TR(x/10, multi+1, resp);
}

//calculo Binario para Decimal
unsigned int calc_b_d(unsigned int x)
{
    return calc_b_d_TR(x, 0, 0);
}

//calculo de Celsius para Kelvin
float calc_c_k (float x)
{
    x += 273.15;
    return x;
}

//calculo de Kelvin para Celsius
float calc_k_c (float x)
{
    x -= 273.15;
    return x;
}

//calculo de Celsius para Fahrenheit
float calc_c_f (float x)
{
    x *= 9;
    x /= 5;
    x += 32;
    return x;
}

//calculo de Fahrenheit para Celsius
float calc_f_c (float x)
{
    x -= 32;
    x *= 5;
    x /= 9;
    return x;
}

//Pega o valor original e retorna o transformado
float calc_geral(int op, int te, int ts, float va){
    switch (op){
        case 1:
            switch (te){
                case 1:
                    switch (ts){
                        case 1:
                            return va;
                        case 2:
                            return calc_c_f(va);
                        case 3:
                            return calc_c_k(va);
                    }
                case 2:
                    switch (ts){
                        case 1:
                            return calc_f_c(va);
                        case 2:
                            return va;
                        case 3:
                            va = calc_f_c(va);
                            return calc_c_k(va);
                    }
                case 3:
                    switch (ts){
                        case 1:
                            return calc_k_c(va);
                        case 2:
                            va = calc_k_c(va);
                            return calc_c_f(va);
                        case 3:
                            return va;
                    }
            }
        case 2:
           switch (te){
                case 1:
                    switch (ts){
                        case 1:
                            return va;
                        case 2:
                            return calc_d_b(va);
                    }
                case 2:
                    switch (ts){
                        case 1:
                            return calc_b_d(va);
                        case 2:
                            return va;
                    }
           }
    }
}

//Imprime saida final com a unidade, se necessaria
float print(int op, int ts, float va){
    switch(op){
        case 1:
            switch(ts){
                case 1:
                    printf("%.2f C\n", va);
                    break;
                case 2:
                    printf("%.2f F\n", va);
                    break;
                case 3:
                    printf("%.2f K\n", va);
                    break;
            } break;
        case 2:
            printf("%.0f\n", va);
            break;
    }
}

//Variaveis: operacao, tipo entrada, tipo saida e valor
int main() {
    int op, te, ts;
    float va;
    
    scanf("%d %d %d %f", &op, &te, &ts, &va);
    
    va = calc_geral(op, te, ts, va);
    
    print(op, ts, va);
    
    return 0;
}