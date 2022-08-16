/* Nome: Kalani Sosa Pereira  Turma: M2
Ler um valor par para n e depois mostrar todos números pares até n. */

#include <stdio.h>
#include <locale.h>

int main(){

    int i, n;
    printf("digite um valor par para n:");
    scanf("%d", &n);

    if (n%2 != 0){
        printf("numero invalido!");
        return 0;
    }

    printf("numeros pares ate n: ");
    for (i = 0; i < n; i++){
        if (i%2 == 0){
            printf(" %d ", i);
        } 
    }
    
    return 0;
}