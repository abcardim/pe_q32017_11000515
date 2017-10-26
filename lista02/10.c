#include <stdio.h>

int fibMem[1000] = {0}; //prof adicionou esse 0 depois

int fib (int n)
{
    int resp;
    if (n==0) return 0;
    if (n<=2) return 1;
    /*altere a linha abaixo */
    resp = fib(n-1)+fib(n-2);
    /*Prof: Da para usar o proprio vetor
    if (fibMem[n-1]==0) fibMem[n-1] = fib(n-1); */
    if ( fibMem[n]!=resp ) fibMem[n]=resp;
    
    return resp;
}

//Professor:
/*
int fib(int n)
{
  if(n==0) return 0;
  if(n==1) return 1;
  if (fibMem[n]==0){
      fibMem[n] = fib(n-1)+fib(n-2);
  }
  return fibMem[n];
}
*/

int main()
{
    int o, n, i;
    
    fibMem[0] = 0;
    fibMem[1] = 1;
    fibMem[2] = 1;
    
    scanf("%d" , &n);
    
    
    printf("elemento %d da sequencia: %d\n" ,n,  fib(n));
    
    printf("Sequencia:\n");
    for( i=0; i<=n ; i++)
    {
        printf("%d ", fibMem[i]);
    }
    printf("\n");
    
    
    printf("%d\n", fib(n));
    return 0;
}