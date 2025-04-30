#include <stdio.h>

int main() {
    char nome[] = "Casimiro";
    
    printf("Nome: Casimiro\n");
    
    // Imprime os caracteres entre *
    printf("*");
    for (int i = 0; nome[i] != '\0'; i++) {
        printf(" %c *", nome[i]);
    }
    printf("\n");
    
    return 0;
}