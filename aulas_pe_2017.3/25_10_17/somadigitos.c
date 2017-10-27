#include <stdio.h>

int somadigitos_TR( int n, int resp)
{
    if ( n==0 ) return resp;
    return somadigitos_TR(n/10, resp+=n%10);
}

int somadigitos( int n )
{
    return somadigitos_TR( n, 0);
}

int main(){
    int n;
    
    scanf("%d", &n);
    
    printf("%d", somadigitos(n));
    
    return 0;
}


//baseado na soma de digitos