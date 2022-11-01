#include <stdio.h>
#include <stdlib.h>

// Aluno: Marcus Vinicius Emanuel Pereira
// Matrícula: 12121BSI244

int main(){

float vetor[20], aux;



    for(int i=0;i<20;i++)
    {
        printf("digite o numero na posicao [%i]: ", i+1);
        scanf("%f", &vetor[i]);
    }
        for(int i=0;i<20;i++){
        for(int j=i+1; j<20; j++){

            if(vetor[i] < vetor[j]){

            aux=vetor[i];
            vetor[i]=vetor[j];
            vetor[j]=aux;

            }
            }
            }

            printf("\n\nAqui temos a ordem decrescente: \n");
            for(int i=0;i<20;i++){
                printf("Posicao [%d]:  %.1lf\n  ", i+1, vetor[i]);
            }


    return 0;


}
