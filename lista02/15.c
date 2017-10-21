#include <stdio.h>

/* funcao recursiva em c para resolver torre de hanoi
dica de conceito goo.gl/NPEUrj*/
void torreHanoi(int n, char de_bastao, char para_bastao, char bastao_aux)
{
    if (n == 1)
    {
        printf("%c-%c", de_bastao, para_bastao);
        return;
    }
    
    torreHanoi(n-1, de_bastao, bastao_aux, para_bastao);
    printf(", %c-%c, ", de_bastao, para_bastao);
    torreHanoi(n-1, bastao_aux, para_bastao, de_bastao);
}
 
int main() {
    int n; // Numero de discos
    
    scanf("%d", &n);
    torreHanoi(n, 'A', 'C', 'B');  // A, B e C sao os nomes dos bastoes
    
    printf("\n");
    return 0;
}