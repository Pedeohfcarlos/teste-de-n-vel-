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
    Disciplina * materias;
}Aluno;
int main(){
    Aluno * aluno = (Aluno*) malloc ( sizeof(Aluno));
    if (aluno==NULL){
        exit(1);
    }
    aluno->materias = (Disciplina*) malloc(3*sizeof(Disciplina));
if(aluno-> materias==NULL){
	exit(1);
}
printf(" informe os dados do aluno: nome, idade e matricula\n");
scanf(" %[^\n]",aluno->nome);
scanf("%d %d", &aluno->idade, &aluno->matricula);
int index = 0;
for(index = 0; index<3; index++){
    printf("Cadastro da Disciplina:[%d] codigo e nota\n", index+1);
    scanf(" %[^\n]", aluno->materias[index].nome);
    scanf(" %d", &aluno-> materias[index].codigo);
    scanf(" %f", &aluno->materias[index].nota);

}
free(aluno->materias);
free(aluno);

    return 0;
}