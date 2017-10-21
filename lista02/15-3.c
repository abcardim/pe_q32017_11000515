/* lista 2 exercicio 15
 * (Desafio) A Torre de Hanoi eh um quebra-cabeca matematico no qual temos tres bastoes
 * e n discos.  O objetivo deste quebra-cabeca eh mover a pila de discos de um bastao para o
 * outro seguindo as 3 regras a seguir:
 * 1. Somente um disco pode ser movido por vez;
 * 2. Somente os discos do topo da pilha podem ser movidos e so podem ser colocados
 * sobre o topo de outra pilha (ou em um bastao que nao tenha nenhum disco).
 * 3. Discos nao podem ser colocados sobre discos menores, o tamanho dos discos decresce
 * da base ao topo da pilha.
 * Faca um programa que receba o numero de discos e retorne os movimentos realizados
 * para resolver o quebra-cabeca.
 * Dica: tente resolver primeiro sem o uso de programacao
 * http://www.dynamicdrive.com/dynamicindex12/towerhanoi.htm
 *
 * Autor: Marcos Seiti Suzuki
 * Data: 16/10/2017
 */

#include <stdio.h>

void torre_Hanoi ( int n, char pino_origem, char pino_dest, char pino_aux ) {

    if ( n == 1 ) {

        printf( "%c-%c", pino_origem, pino_dest );

        return;

    }

    torre_Hanoi ( n-1, pino_origem, pino_aux, pino_dest );

    printf ( ", %c-%c, ", pino_origem, pino_dest );

    torre_Hanoi ( n-1, pino_aux, pino_dest, pino_origem );

}

int main() {

    int n;

    scanf ( "%d", &n );

    torre_Hanoi(n, 'A', 'C', 'B');
    printf ("\n");

    return 0;

}