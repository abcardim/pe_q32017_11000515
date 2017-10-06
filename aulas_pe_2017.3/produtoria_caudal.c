#include <stdio.h>

unsigned int produto1n_TR (unsigned int n, unsigned int parcial){
    printf("Produto1n_TR: n = %d, parcial = %d\n", n, parcial);
    if (n==1) {
        printf("Retornando a resposta ( do ""parcial"") pro main!\n");
        return parcial; //aqui sempre parcial = 0.
    }
    return produto1n_TR(n-1, n*parcial);
}

inline unsigned int produto1n (unsigned int n) {
    return produto1n_TR(n, 1); // parcial = 1, o elemento neutro da multiplicacao!
    
}

unsigned int main(){
    unsigned int n;
    scanf("%d", &n);
    printf("%d", produto1n(n));
    return 0;
    
}


/*
Para a pergunta: Poderiamos eliminar a funcao intermediaria
colocando produto1n_TR(n, 1) no main?

- Essa opção fica mais confusa para o usuario (pois precisa colocar 1 do lado)
- Como alternativa pode colocar o "inline" na frente do produto1n para que ele meio que
substitua as chamadas da funcao produto1n(n) por produto1n_TR(n,1), efetivamente
tirando a funcao intermediaria na memoria
*/