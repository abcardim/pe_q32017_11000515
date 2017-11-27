#include <stdio.h>      /* printf, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <limits.h>

#define BIGNUM ULONG_MAX

typedef unsigned long int ulint;

void fill_array(int * array, int n, int op)
{
    int i, j;
    switch (op) {
        case 1:
            for (i=0; i<n; i++){
                *(array+i) = (rand());
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
    int N = 10000;
    int array[N];
    
    srand (time(NULL));
    
    clock_t tempo_init, tempo_fim;
    double tempo_gasto;
    
    //INSERTION SORT - valores aleatorios
    fill_array(array, N, 1);
    printf("Valor do vetor - inicial: %d final:%d\n", array[0], array[N-1]);
    
    tempo_init = clock();
    insertion_sort(array, N);
    tempo_fim = clock();
    
    tempo_gasto = (double)(tempo_fim - tempo_init) / CLOCKS_PER_SEC;
    printf("Tempo INSERTION SORT - valores aleatorios: %lf\n\n", tempo_gasto);
    
    //INSERTION SORT - 1 a N sequencial
    fill_array(array, N, 2);
    printf("Valor do vetor - inicial: %d final:%d\n", array[0], array[N-1]);
    
    tempo_init = clock();
    insertion_sort(array, N);
    tempo_fim = clock();
    
    tempo_gasto = (double)(tempo_fim - tempo_init) / CLOCKS_PER_SEC;
    printf("Tempo INSERTION SORT - 1 a N sequencial: %lf\n\n", tempo_gasto);
    
    //INSERTION SORT - N a 1 sequencial
    fill_array(array, N, 3);
    printf("Valor do vetor - inicial: %d final:%d\n", array[0], array[N-1]);
    
    tempo_init = clock();
    insertion_sort(array, N);
    tempo_fim = clock();
    
    tempo_gasto = (double)(tempo_fim - tempo_init) / CLOCKS_PER_SEC;
    printf("Tempo INSERTION SORT - N a 1 sequencial: %lf\n\n", tempo_gasto);

    return 0;
}