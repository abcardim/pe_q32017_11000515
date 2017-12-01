/* lista 3 exercicio 3
 * 
 * Receba uma matriz 3x3 e calcule sua transposta.
 *
 * Autor: Marcos Seiti Suzuki
 * Data: 27/10/2017
 */

#include <stdio.h>
#include <stdlib.h>

int * transposta (int *array, int m, int n)
{
    int i, j, *t;
    t=malloc(sizeof(int)*m*n);

    for (i=0; i<n; i++) {
        for (j=0; j<m; j++) {
            *(t+i*n+j)=*(array+i+j*n);
        }
    }

    return t;

}

void print_matriz(int *array, int m, int n)
{
    int i,j;

    for (i=0; i<m; i++) {
        for (j=0; j<n; j++) {
            printf("%d ", *(array+i*m+j));
        }
        printf("\n");             
    }
}

int main ( ) 
{

    int i=0, m[3][3], l=3, c=3;
    int *tm;

    scanf("%d %d %d", &m[0][0], &m[0][1], &m[0][2]);
    scanf("%d %d %d", &m[1][0], &m[1][1], &m[1][2]);
    scanf("%d %d %d", &m[2][0], &m[2][1], &m[2][2]);

    tm = transposta(&m[0][0], l, c);

    print_matriz(tm, c, l);

    free(tm);

    return 0;
  
}