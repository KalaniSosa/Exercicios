/* Nome : Kalani Sosa Pereira  Turma : M2*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Raizes (float A, float B, float C, float *x1, float *x2){
    int raizReal;
    float delta;

    delta = pow(B,2) - (4 * A * C);

    if (delta < 0){
        raizReal = 0;
    }else if (delta == 0) {
        raizReal = 1;
    }else {
        raizReal = 2;
    }
   
    if ( raizReal > 0){ 
        *x1 = - B + sqrt(delta) / (2 * A);
        *x2 = - B - sqrt(delta) / (2 * A);
    }

    return(raizReal);
}

int main (){
    int raizes;
    float a, b, c, x1, x2;

    printf("digite os valores de a, b e c da baskara: ");
    scanf("%f%f%f", &a, &b, &c);

    if (a == 0){
        printf("A variavel a nao pode ser zero!");
        return 0;
    }

    raizes = Raizes(a, b, c, &x1, &x2);

    printf("Numero de raizes reais: %d\n", raizes);

    if (raizes > 0){
        printf("X': %f\nX'': %f", x1, x2);
    }else {
        printf ("Nao existe raiz real!");
    }
    
    return(0);
}
