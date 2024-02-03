#include<stdio.h>
#include<stdlib.h>
struct aluno{
    char nome[20];
    int idade;
    int mat;
    char email[50];
};
int main(void){
    struct aluno estudante;
    printf("digite o sue nome:\n");
    scanf(" %[^\n]", estudante.nome);
    printf(" digite a sua idade:\n");
    scanf("%d", &estudante.idade);
    printf("digite sua matrícula\n");
    scanf("%d",&estudante.mat);
    printf("digite o seu email\n");
    scanf("%s[^\n]",estudante.email);

    return 0;
}