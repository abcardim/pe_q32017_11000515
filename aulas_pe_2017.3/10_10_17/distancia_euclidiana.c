#include <stdio.h>
#include <math.h>

float main( int x[][2], int n, int i){
    float  soma=0, contador=0;
    int a, b;
    
    for ( a=0 ; a<n ; a++){
        for ( b=0 ; b<2 ; b++){
            soma += sqrt( pow( ( x[i][b]-x[a][b] ),2 ) );
        }
    }
    return soma/(n*2);

}

Professor

float distancia_euclidiana( int x[][2], int n, int i){
    int j;
    float media = 0.0;
    
    for( j=0 ; j<n ; j++)
    {
        media += sqrt( pow( x[i][0]-x[j][0],2) 
        + pow(x[i][t]-........))
    }
}

ou ainda fazer em funcao dist_euclidiana

seria chamada por media += distancia_euclidiana((x[i],x[j],2))

float distancia_euclidiana(int x[], y[], int n);
{
    int i;
    float d = 0.0;
    for (i=0;i<n;i++){
        d+= pow( (x[i]-y[i]) , 2);
    }
    return sqrt(d);
}