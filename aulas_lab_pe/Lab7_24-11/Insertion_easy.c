#include <stdio.h>      /* printf, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <limits.h>

#define BIGNUM ULONG_MAX

typedef unsigned long int ulint;

ulint f1(ulint x)
{
  int div = 8;
  return x / div;
}

ulint f2(ulint x)
{
  return x >> 3;
}


void fill_array(int * array, int n, int op)
{
    int i, j;
    switch (op) {
        case 1:
            for (i=0; i<n; i++){
                *(array+i) = (rand()%30);
            } break;
        case 2:
            for (i=0; i<n; i++){
                *(array+i) = 1+i;
            } break;
        case 3:
            j=0;
            for (i=n; i>0; i--,j++){
                *(array+j) = i;
            } break;
    }
}

void print_array(int * array, int n)
{
    int i;
    for (i=0; i<n; i++){
        printf("%d ", *(array+i));
    }
    printf("\n");
}

void insertion_sort(int * array, int n)
{
    int i, j, temp;
    for(i=1; i<n; i++){
        for(j=i; j>0; j--){
            if(array[j-1]>array[j]){
                temp = array[j-1];
                array[j-1] = array[j];
                array[j] = temp;
            }
        }
    }
}

int main() {
    int N = 30;
    int array[N];
    int op;
    
    printf("Escreva a opção de preencher o vetor!\n1- aleatorios \n2- 1 a N sequencial \n3- N a 1 sequencial\n");
    
    scanf("%d", &op);
    
    srand (time(NULL));
    
    clock_t tempo_init, tempo_fim;
    double tempo_gasto;
    
    fill_array(array, N, op);
    printf("Array inicial: ");
    print_array(array, N);
    
    tempo_init = clock();
    insertion_sort(array, N);
    
    tempo_fim = clock();
    tempo_gasto = (double)(tempo_fim - tempo_init) / CLOCKS_PER_SEC;
    printf("Tempo INSERTION SORT: %lf\n", tempo_gasto);
    
    printf("Array final: ");
    print_array(array, N);

    return 0;
}