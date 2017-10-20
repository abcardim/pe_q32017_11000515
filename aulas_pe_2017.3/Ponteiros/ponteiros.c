#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int x = 17;
    int * px;
    px = &x;
    printf("%p %p %d\n", &x, px, *px);
    
    return 0;
}