#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void){
    int notas[20][5],i,j;
    char materia;

    printf("----------------------------------\n");
    printf("*-*-*(BEM VINDO A PEDAGOGIA)*-*-*\n");
    printf("----------------------------------\n");
    printf("Primeiro temos que adicionar a nota de algum aluno, escolha alguma disciplina.. ");
    vempraca:
    scanf("%s",&materia);

    switch (materia)
    {
        case matematica:
            for ( i = 0; i<4; i++){
                for (j = 0;j<4;j++){
                    printf("Digite a nota do aluno. [%i][%i]\t",i,j);
                    scanf("%i",&notas);
                }
            }
            break;

        default:
            printf("\tDigite uma disciplina válida.");
            goto vempraca;
            break;
    }

    return 0;
}
