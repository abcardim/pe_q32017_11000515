#include <stdio.h>

int fibMem[1000];

int fib (int n)
{
    int resp;
    if (n==0) return 0;
    if (n<=2) return 1;
    /*altere a linha abaixo */
    resp = fib(n-1)+fib(n-2);
    if ( fibMem[n]!=resp ) fibMem[n]=resp;
    
    return resp;
}

int main()
{
    int o, n, i;
    
    fibMem[1] = 1;
    fibMem[2] = 1;
    
    scanf("%d" , &n);
    
    /*
    printf("elemento %d da sequencia: %d\n" ,n,  fib(n));
    
    printf("Sequencia:\n");
    for( i=0; i<=n ; i++)
    {
        printf("%d ", fibMem[i]);
    }
    printf("\n");
    */
    
    printf("%d\n", fib(n));
    return 0;
}