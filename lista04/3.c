#include <stdio.h>
#include <stdlib.h>


typedef struct Aluno {
    char nome[100];
    unsigned int registro;
    float p1, p2, p3, average;
} Aluno;

float average (float p1, float p2, float p3) {
    return (p1+p2+p3)/3.0;

}

int main () {

    FILE * fp;
    Aluno alunos[50];
    int i;
    
    fp = fopen("lista_alunos.txt", "r+");
    
    for (i=0;i<50;i++) {
        fscanf (fp, "\%s \%d \%f \%f  %f",
                    alunos[i].nome,  &alunos[i].registro,
                    &alunos[i].p1, &alunos[i].p2, &alunos[i].p3);
    }
    
    fclose(fp);
    
    fp = fopen("media_alunos.txt", "w+");
    
    for (i=0;i<50;i++) {
        alunos[i].average = average(alunos[i].p1,alunos[i].p2,alunos[i].p3);
        
        fprintf (fp, "\%s \%04d \%.2f \%.2f %.2f %.2f\n",
                    alunos[i].nome, alunos[i].registro,
                    alunos[i].p1, alunos[i].p2, alunos[i].p3,
                    alunos[i].average);
    }
    
    fclose(fp);

    return 0;
}