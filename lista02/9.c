#include <stdio.h>

//Calcular a potencia caudal
int potencia_TR( int x, int y, int resp)
{
    if ( y==0 ) return resp;
    return potencia_TR(x, y-1, resp*x );
}

//Calcular a potência
int potencia( int x, int y)
{
    return potencia_TR( x, y, 1 );
}

int main(){
    int x, y;
    scanf("%d %d", &x, &y);
  
    printf("%d\n", potencia(x,y));
    return 0;
}