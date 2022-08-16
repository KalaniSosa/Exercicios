/* Nome: Kalani Sosa Pereira   Turma: M2 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    float n1, n2, resultado;
    int op;

    do{
        printf("\ndigite o primeiro numero:");
        scanf("%f", &n1);
        printf("digite o segundo numero:");
        scanf("%f", &n2);

        printf("\nadicao.1\nsubtracao.2\nmultiplicacao.3\ndivisao.4\nsair.5\nQual operacao fazer?");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            resultado=n1+n2;
            printf("\nresultado:%f", resultado);
            break;
        case 2:
            resultado=n1-n2;
            printf("\nresultado:%f", resultado);
            break;
        case 3:
            resultado=n1*n2;
            printf("\nresultado:%f", resultado);
            break;
        case 4:
            resultado=n1/n2;
            printf("\nresultado:%f", resultado);
            break;
        case 5:
            break;
        default:
            printf("\nValor invalido!");
            break;
        }
    }while (op != 5);
    
    return 0;
}