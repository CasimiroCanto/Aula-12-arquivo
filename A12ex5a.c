#include <stdio.h>
#include <string.h>

int main() {
  char senha[20];
  printf("Digite a senha: ");
  scanf("%19s", senha);

  int tamanho = strlen(senha);

  printf("Tamanho: %d", tamanho);

  return 0;
}  