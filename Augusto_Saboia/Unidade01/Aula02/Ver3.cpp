#include <stdio.h>
#include <locale.h>
/* 
Versão 01: 

O algoritmo calcula 15% de comissão sobre o valor do salário do vendedor
informando ao fina o salário fixo, comissão e salário a ser pago ao vendedor

Versão 02:
Implementar a comissão variável, da seguinte forma:
Vendas até 10k - 6%
Vendas 10k a 20k - 7%
Vendas 20k a 30k - 8%
Vendas acima de 30k - 9%
Vendas acima de 50k - 10%

*/
int main() {
  setlocale(LC_ALL, "Portuguese"); // Console em Português
  
  float valor1, valor2;
  
  printf("Digite o valor total das vendas do vendedor: ");
  scanf("%f", &valor2);

  if (valor2 <= 10000){ valor1 = 6; valor1= (valor1/100) * valor2;}
  else if (valor2 <= 20000){ valor1 = 7; valor1 = (valor1/100) * valor2;}
  else if (valor2 <= 30000){ valor1 = 8;  valor1 = (valor1/100) * valor2;} 
  else if (valor2 <= 50000){ valor1 = 9;  valor1 = (valor1/100) * valor2;}
  else{ valor1 = 10; valor1= (valor1/100) * valor2;}

  printf("Digite a salário do vendedor: ");
  scanf("%f", &valor2);
  valor1 = valor1 + valor2;

  printf("Salário Final: R$%0.2f\n", valor1);
}
