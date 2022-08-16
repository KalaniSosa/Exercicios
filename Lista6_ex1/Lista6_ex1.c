/* Nome: Kalani Sosa Pereira   Turma: M2 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int dia, mes, ano;
}Data;

typedef struct{
    int hora, minuto, segundo;
}Horario;

typedef struct{
    char descricao[100];
    Data data;
    Horario horario;
}Compromisso;

int main(){
    Compromisso compromisso;

    printf("digite a data no formato dd mm aaaa:");
    scanf("%d%d%d", &compromisso.data.dia, &compromisso.data.mes, &compromisso.data.ano);
    printf("digite o horario no formato hh mm ss:");
    scanf("%d%d%d", &compromisso.horario.hora, &compromisso.horario.minuto, &compromisso.horario.segundo);
    getchar(); 
    printf("lembrete:");
    fgets(compromisso.descricao, 100, stdin);

    printf( "\nCOMPROMISSO\nDia:%d/%d/%d\nHorario:%d:%d:%d\nLembrete:%s",
     compromisso.data.dia, compromisso.data.mes, compromisso.data.ano,
     compromisso.horario.hora, compromisso.horario.minuto, compromisso.horario.segundo,
     compromisso.descricao );


}