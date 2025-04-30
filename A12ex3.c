#include <stdio.h>

int compara(char *s1, char *s2) {
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i]) {
            return 0; // Diferente
        }
        i++;
    }
    return s1[i] == '\0' && s2[i] == '\0'; 
}

int main() {
    char senha_correta[] = "azimo";
    char senha_usuario[20];
    int tentativas = 3;

    while (tentativas > 0) {
        printf("Digite a senha: ");
        scanf("%19s", senha_usuario);

        if (compara(senha_usuario, senha_correta)) {
            printf("Seja bem vindo!\n");
            return 0;
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