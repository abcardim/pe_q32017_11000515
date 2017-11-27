#include <stdio.h>

typedef struct simples 
{
    int x;
    char y;
} simples;

void fill_d (int n, simples * d)
{
    int i, v=65;
    for(i=0; i<n; i++){
            d[i].x=v;
            d[i].y=v+1;
            v+=2;
    }
}

void print_d (int n, simples * d)
{
    int i;
    for(i=0; i<n; i++){
            printf("%d %c ", d[i].x, d[i].y);
    }
    printf("\n");
}

void c_w_arqui(int n, simples * d)
{
    int i;
    FILE * fp;
    fp = fopen ("arquivo.txt", "w");
    fwrite(d, sizeof(simples), n, fp);
    
    fclose(fp);
}

/*n = tamanho array, m = # argumentos struct*/
int main() {
    int n=10;
    simples d[n];
    
    fill_d(n, d);
    print_d(n, d);
    
    c_w_arqui(n, d);
    
    return 0;
}

/* Ideia
simples d[10]
preencha
imprime elementos
write, salvando em um arquivo
fecha o arquivo

open, abre o arquivo
fread, le o arquivo salvando no simples d[10]
imprime dnovo o simples pra ver
*/
