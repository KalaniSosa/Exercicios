/* Nome: Kalani Sosa Pereira  Turma: M2 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Aluno{
    int matricula;
    char nome[100];
    float nota1, nota2, nota3, media;
}aluno[5];

int main(){

    int i;
    char maiorN[100], maiorM[100], menorM[100];
    float maiorNota, maiorMedia, menorMedia;

    for(i=0; i<5; i++){
        printf("\nNome do aluno:");
        fgets(aluno[i].nome, 100, stdin);
        printf("\nMatricula do aluno:");
        scanf("%d", &aluno[i].matricula);
        printf("\nNota 1:");
        scanf("%f", &aluno[i].nota1);
        printf("\nNota 2:");
        scanf("%f", &aluno[i].nota2);
        printf("\nNota 3:");
        scanf("%f", &aluno[i].nota3);
    
        aluno[i].media = (aluno[i].nota1 + aluno[i].nota2 + aluno[i].nota3)/3;
    
        if (aluno[i].media >= 6){
            printf("\nAluno aprovado!\n");
        }else {
            printf("\nAluno reprovado!\n");
        }
        
        getchar();

        if (aluno[i].nota1 >= maiorNota){
            maiorNota = aluno[i].nota1;
            strcpy(maiorN, aluno[i].nome);
        }

        if (aluno[i].media >= maiorMedia){
            maiorMedia = aluno[i].media;
            strcpy (maiorM, aluno[i].nome);
        }
        
        if (aluno[i].media <= menorMedia){
            menorMedia = aluno[i].media;
            strcpy (menorM, aluno[i].nome);
        }

    }
    printf("Aluno com maior media:%s", maiorM);
    printf("Aluno com menor media:%s", menorM);
    printf("Aluno com a maior nota:%s", maiorN);

}