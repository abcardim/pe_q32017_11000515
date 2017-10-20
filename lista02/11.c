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

//calcula e printa o resultado
int print_conversao(int n, int op)
{
    switch (op){
        case 1:
            printf("%d\n", calc_d_b(n));
            break;
        case 2:
            printf("%d\n", calc_b_d(n));
            break;
    }
    return 0;
}

int main(){
    int n, op;
    
    scanf("%d %d", &n, &op);
    
    print_conversao(n, op);
    
    return 0;
}