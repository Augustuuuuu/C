#include <stdio.h>
#include <locale.h>


int main() {
  setlocale(LC_ALL, "Portuguese"); // Console em Portugu�s

  float valor1, valor2;
  printf("Digite o percentual: ");
  scanf("%f", &valor1);

  printf("Digite o valor total das vendas do vendedor: ");
  scanf("%f", &valor2);
  valor1= (valor1/100) * valor2;
  
  printf("Digite a sal�rio do vendedor: ");
  scanf("%f", &valor2);
  valor1 = valor1 + valor2;

  printf("Sal�rio Final: R$%0.2f\n", valor1);

}
