#include <stdio.h>
#include <string.h>

int main() {
    char senha[100];

    printf("Digite a senha: ");
    scanf("%99s", senha); 

    if (strlen(senha) < 8) {
        printf("Erro: A senha deve ter pelo menos 8 caracteres.\n");
    } else {
        printf("Senha válida!\n");
    }

    return 0;
}