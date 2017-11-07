#include <stdio.h>
#define N 100

typedef struct pilha {
    int dados[N];
    int topo;
} pilha;

int insere_pilha ( pilha * p, int x )
{
    If (p->topo + 1 < N) { // verifica se topo+1 passa do limte da pilha
        ++(p->topo); //acrescenta 1 ao topo
        p->dados[p->topo] = x;
    return 1;
    }
    return -1;
}
/* a setinha é o seguinte
para passar um ponteiro em struct
p.x   p->x
p->x é igual a ==(*p).x, ou seja,
a estrutura que o p esta apontando e o x seria
a caracteristica dela
*/

int remove_pilha ( pilha * p )
{
    --(p->topo); //reduz 1 do topo (na imagem desce o topo em 1)
    return p->dados[p->topo + 1]; //retorna o valor de onde o topo estava. repara q n precisa deletar o valor antigo
}

pilha bin;
int x = 22;
bin.topo = -1;

while (x) {
    If ( insere_pilha( &p, x%2 ) == -1 ) { //retorna -1 se der erro lembra?
        printf(“Espaço insuficiente na pilha!\n”);
        return -1;
    }
    x /= 2;
}

while (bin.topo > -1) {
    printf(“%d”, remove_pilha(&p));
}
printf(“\n”);