#include <stdio.h>

unsigned int mdc (unsigned int m, unsigned int n){
    if ( !n )    // mesma coisa que if (n==0)
        return m;
    if ( !m )
        return n;
    return mdc(n, m%n);
}
/*É uma recrusão caudal pois no return final,
só tem uma chamada recursiva, 
sem nenhuma operação adicional.
O compilador consegue transformar em interativo
transformando para o comando jump.
O fatorial por exemplo não é caudal*/
unsigned int main ()
{
    unsigned int m, n;
    scanf ("%d %d", &m, &n);
    printf ("%d", mdc(m,n));
    return 0;
}