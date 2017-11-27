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

void swap (int * v, int i, int j)
{
    int temp;
    temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}

int partition (int * v, int low, int high)
{
    int pivot = v[high];
    int j, i = low;
    for (j=low; j<high; j++) {
        if (v[j] <= pivot) {
            swap(v, i, j);
            i++;
        }
    }
    swap(v, i, high);
    return i;
}

void quicksort (int * v, int low, int high)
{
    int p;
    if (low < high) {
        p = partition(v, low, high);
        quicksort(v, low, p-1);
        quicksort(v, p+1, high);
    }
}

int main() {
    int N = 10000;
    int array[N];
    
    srand (time(NULL));
    
    clock_t tempo_init, tempo_fim;
    double tempo_gasto;
    
    //QUICKSORT - valores aleatorios
    fill_array(array, N, 1);
    printf("Valor do vetor - inicial: %d final:%d\n", array[0], array[N-1]);
    
    tempo_init = clock();
    quicksort(array, 0, N-1);
    tempo_fim = clock();
    
    tempo_gasto = (double)(tempo_fim - tempo_init) / CLOCKS_PER_SEC;
    printf("Tempo QUICKSORT - valores aleatorios: %lf\n\n", tempo_gasto);
    
    //QUICKSORT - 1 a N sequencial
    fill_array(array, N, 2);
    printf("Valor do vetor - inicial: %d final:%d\n", array[0], array[N-1]);
    
    tempo_init = clock();
    quicksort(array, 0, N-1);
    tempo_fim = clock();
    
    tempo_gasto = (double)(tempo_fim - tempo_init) / CLOCKS_PER_SEC;
    printf("Tempo QUICKSORT - 1 a N sequencial: %lf\n\n", tempo_gasto);
    
    //QUICKSORT - N a 1 sequencial
    fill_array(array, N, 3);
    printf("Valor do vetor - inicial: %d final:%d\n", array[0], array[N-1]);
    
    tempo_init = clock();
    quicksort(array, 0, N-1);
    tempo_fim = clock();
    
    tempo_gasto = (double)(tempo_fim - tempo_init) / CLOCKS_PER_SEC;
    printf("Tempo QUICKSORT - N a 1 sequencial: %lf\n\n", tempo_gasto);

    return 0;
}