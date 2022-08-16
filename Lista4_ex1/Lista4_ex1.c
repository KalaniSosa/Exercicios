/* Nome: Kalani Sosa Pereira   Turma: M2  */

#include <stdio.h>
#include <stdlib.h>

int main(){

    int A[]={1,0,5,-2,-5,7}, Soma, i;

    Soma=A[0]+A[1]+A[5];
    printf("Soma: %d\n", Soma);

    A[4]=100;

    for (i=0;i<6;i++)
    {
        printf("vetor: %d\n", A[i]);
    }
    
}