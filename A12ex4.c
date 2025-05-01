#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char palavra[6]; 
    char letra;
    int erros = 0;
    int encontrou;
    int letras_encontradas[5] = {0}; 
    int total_letras = 0;
    
    printf("Digite uma palavra de até 5 letras: ");
    scanf("%5s", palavra);
    getchar();
    
    total_letras = strlen(palavra);
    
    while (erros < 3) {
        encontrou = 0;
        
        printf("Digite uma letra para buscar na palavra: ");
        scanf("%c", &letra);
        getchar(); 
        
        
        for (int i = 0; i < total_letras; i++) {
            if (tolower(palavra[i]) == letra && !letras_encontradas[i]) {
                printf("Letra encontrada na posição %d!\n", i + 1);
                letras_encontradas[i] = 1;
                encontrou = 1;
            }
        }
        
        if (!encontrou) {
            erros++;
            printf("Letra não encontrada. Erros: %d/3\n", erros);
        }
        
        // Verifica se todas as letras foram encontradas
        int todas_encontradas = 1;
        for (int i = 0; i < total_letras; i++) {
            if (!letras_encontradas[i]) {
                todas_encontradas = 0;
                break;
            }
        }
        
        if (todas_encontradas) {
            printf("Parabéns! Você encontrou todas as letras da palavra!\n");
            break;
        }
    }
    
    if (erros >= 3) {
        printf("Você atingiu o limite de 3 erros. Fim do jogo.\n");
    }
    
    printf("A palavra era: %s\n", palavra);
    
    return 0;
}