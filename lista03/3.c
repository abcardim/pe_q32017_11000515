/*  
*   Receba 2 vetores do tipo int com 5 posicoes,
*   v1 e v2, retorne um vetor com a soma desses
*   dois vetores, v3[i] = v1[i] + v2[i].

*   Data: 06/11/2017
*   Autor: André B. Cardim
*/

#include <stdio.h>
#include <stdlib.h>

//tamanho do vetor do exercicio
#define N 5

void scan_vet(int * v, int n)
{
    int i=0;
    while (i<n){
        scanf("%i", (v+i));
        i++;
    }
}

int * soma_vet(int * v1, int * v2, int n)
{
    int * v3;
    
    v3 = malloc(sizeof(int)*(n));
    
    while (n>=0){
        *(v3+n) = *(v1+n) + *(v2+n);
        n--;
    }
    
    return v3;
}

void print_vetor(int* v, int n)
{
    int i=0;
    while (i<n){
        printf("%i ", *(v+i));
        i++;
    } printf("\n");
}


int main(){
    int v1[N];
    int v2[N];
    
    scan_vet(v1,N);
    scan_vet(v2,N);
    
    int * v3 = soma_vet(v1,v2,N);
    
    print_vetor(v3, N);
    
    free(v3);
    
    return 0;
}