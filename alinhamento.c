#include<stdio.h>
#include<stdlib.h>
typedef struct Disciplina{
    char  nome [20];
    float nota;
    int codigo;
}Disciplina;

typedef struct Aluno{
    char nome [20];
    int idade;
    int matricula;
    Disciplina  materias;
}Aluno;
int main(){
    Aluno aluno;
    aluno.idade = 19;
    aluno.matricula = 202201020;
    aluno.materias.codigo = 9879;
    printf (" idade %d,\n matricula %d, \n codigo %d \n", aluno.idade, aluno.matricula, aluno.materias.codigo);
    return 0;
}