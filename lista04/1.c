#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct Vetor_3 {
    float x;
    float y;
    float z;
} Vetor_3;

float distancia (Vetor_3 *a, Vetor_3 *b) {

    float d=0.0;

    d+= pow((a->x - b->x),2);
    d+= pow((a->y - b->y),2);
    d+= pow((a->z - b->z),2);
    d = pow(d,0.5);

    return d;

}

int main () {

    Vetor_3 *a, *b;
    a = malloc(sizeof(Vetor_3));
    b = malloc(sizeof(Vetor_3));

    scanf("%f, %f, %f", &(a->x), &(a->y), &(a->z));
    scanf("%f, %f, %f", &(b->x), &(b->y), &(b->z));
    
    printf("%.2f\n", distancia(a, b));
    
    free(a);
    free(b);

    return 0;
}