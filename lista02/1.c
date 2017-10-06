#include <stdio.h>

int paridade (int n){
    if (n%2==0) return 0;
    return 1;
}

int main (){
    int n;
    scanf("%d", &n);
    printf("%d\n", paridade(n));
    return 0;
}