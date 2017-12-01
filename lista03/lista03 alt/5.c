/* lista 3 exercicio 5
 * Receba um valor inteiro representando o tamanho do vetor e, em seguida, um vetor
 * com esse tamanho. Imprima quais numeros aparecem repetidos e quantas repeticoes deles
 * apareceram. O formato deve ser "numero-repeticoes"
 *
 * Autor: Marcos Seiti Suzuki
 * Data: 02/11/2017
 */

#include <stdio.h>
#include <stdlib.h>

void frequencia(int *n, int *vetor, int *freq)
{
    int i, j, count;
    
    for (i=0; i<*n; i++) freq[i] = -1;
    
    for (i=0; i<*n; i++) {
        count = 1;
        for (j=i+1; j<*n; j++) {
            if (vetor[i]==vetor[j]) {
                count++;
                freq[j] = 0;
            }
        }

        if (freq[i] != 0) freq[i] = count;
    }    
    
}

void print_repeticao(int *n, int *vetor, int *freq)
{
    int i;
    
    for (i=0; i<*n; i++) {
        if (freq[i] != 0)
            printf("%d-%d ", vetor[i], freq[i]);
    }
}

int main () {

    int n, i, *matriz[2];

    scanf("%d", &n);

    matriz[0] = malloc(sizeof(int)*n);
    matriz[1] = malloc(sizeof(int)*n);

    for (i=0; i<n; i++) {
        scanf("%d", matriz[0]+i);
    }
    
    frequencia(&n, matriz[0], matriz[1]);
    
    print_repeticao(&n, matriz[0], matriz[1]);

    printf("\n");
    
    for (i=0; i<2; i++) free(matriz[i]);
    
    return 0;
}