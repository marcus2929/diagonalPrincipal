#include <stdio.h>
#define TAM 6


int main()
{
  float matriz[TAM][TAM], soma = 0;
  for(int i = 0; i < TAM; i++){
    for(int j = 0; j < TAM; j++){
      printf("Digite o valor da posicao [%d][%d]: ", i, j);
      scanf("%f", &matriz[i][j]);
      if(j == i)
        soma += matriz[i][j];
    }
  }
  printf("diagonal principal: %.2f\n", soma);
  return 0;
}
