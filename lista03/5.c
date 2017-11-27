#include <stdio.h>

void scan_vet(int * v, int n)
{
    scanf("aaaascanvet\n");
    int i=0;
    while (i<n){
        scanf("%i", (v+i));
        i++;
    }
}

int jafoi(int * v, int i, int n)
{
    scanf("aaaajafoi\n");
    int j=i;
    while (i>=0)
    {
        if (*(v+j)==*(v+i)){
            return 0;
        }
        i--;
    }
    
    return 1;
}

void find_rep(int * v, int n, int a)
{
    scanf("aaaafindrep\n");
    int x=0;
    while (n>=0)
    {
        if (*(v+n) == a){
            x++;
        }
        n--;
    }
    
    printf("%d-%d ", a,x);
}

int main(){
    int n;
    scanf("%d", &n);
    
    int v[50];
    scan_vet(v,n);
    
    scanf("aaaa\n");
    int i;
    for(i=0; i<n; i++)
    {
        if (jafoi(v,i,n)){
            scanf("aaaa\n");
            find_rep(v,n,i);
        }
    }
    
    
    return 0;
}