/* 
*   Crie uma função chamada “troca”
*   que recebe dois inteiros como parâmetro
*   e troca os valores deles utilizando
*   aritmética de ponteiros.
*
*   Autor: André B. Cardim
*   Data: 26/10/2017
*/

#include <stdio.h>

void troca(int * pa, int * pb)
{
    int temp = *pa;
    *pa = *pb;
    *pb = temp;
    
    return;
}

int main(){
    int a, b;
    
    scanf("%d %d", &a, &b);
    troca(&a, &b);
    printf("%d %d\n", a, b);
    
    return 0;
}