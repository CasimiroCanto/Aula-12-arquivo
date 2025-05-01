#include <stdio.h>
#include <string.h>

int main() {
    char nome[20], sobrenome[30], completo[50];

    // Lê o nome (pode ter espaços)
    printf("Digite o nome: ");
    scanf(" %[^\n]", nome);  

    // Lê o sobrenome (pode ter espaços)
    printf("Digite o sobrenome: ");
    scanf(" %[^\n]", sobrenome);  

    // Concatena nome + espaço + sobrenome
    strcpy(completo, nome);
    strcat(completo, " ");
    strcat(completo, sobrenome);

    // Exibe o nome completo em uma única string
    printf("Nome completo: %s\n", completo);

    return 0;
}