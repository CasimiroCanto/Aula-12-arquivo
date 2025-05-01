#include <stdio.h>
#include <string.h>

int main() {
    char senha_correta[] = "azimo";
    char senha_digitada[10];
    int tentativas = 3;
    int autenticado = 0;
    
    while (tentativas > 0 && !autenticado) {
        printf("Digite a senha: ");
        scanf("%7s", senha_digitada); 
        
        if (strcmp(senha_correta, senha_digitada) == 0) {
            printf("Seja bem vindo!\n");
            autenticado = 1;
        } else {
            tentativas--;
            if (tentativas > 0) {
                printf("Senha errada. Tentativas restantes: %d\n", tentativas);
            } else {
                printf("Tente novamente mais tarde.\n");
            }
        }
    }
    
    return 0;
}