/* Nome : Kalani Sosa Pereira   Turma : M2 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Troca(int *v1, int *v2){
    int aux;
    aux = *v1;
    *v1 = *v2;
    *v2 = aux;
}

int main(){
    
    int a, b;
    
    printf("digite o a: ");
    scanf("%d", &a);
    printf("digite o b: ");
    scanf("%d", &b);

    Troca (&a, &b);

    printf("valor de a: %d\nvalor de b:%d", a, b);
}