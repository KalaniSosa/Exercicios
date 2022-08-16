/* Nome: Kalani Sosa Pereira  Turma: M2 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct{
    char nome[50];
    char rua[50];
    int idade;
}info;


int main(){

    setlocale(LC_ALL, "Portuguese_Brazil");

    printf("digite o nome:");
    gets(info.nome);
    printf("digite a endere�o:");
    gets(info.rua);
    printf("digite a idade:");
    scanf("%d", &info.idade);

    printf("\nnome: %s\nendere�o: %s\nidade: %d\n", info.nome, info.rua, info.idade);


}


