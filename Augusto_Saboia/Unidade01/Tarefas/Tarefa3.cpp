#include <stdio.h>
#include <locale.h>
/* 
Vers�o 01: 

O algoritmo calcula 15% de comiss�o sobre o valor do sal�rio do vendedor
informando ao fina o sal�rio fixo, comiss�o e sal�rio a ser pago ao vendedor

Vers�o 02:
Implementar a comiss�o vari�vel, da seguinte forma:
Vendas at� 10k - 6%
Vendas 10k a 20k - 7%
Vendas 20k a 30k - 8%
Vendas acima de 30k - 9%
Vendas acima de 50k - 10%

*/
int main() {
  setlocale(LC_ALL, "Portuguese"); // Console em Portugu�s
  
  float valor1, valor2;
  
  printf("Digite o valor total das vendas do vendedor: ");
  scanf("%f", &valor2);

  if (valor2 <= 10000){ valor1 = 6; valor1= (valor1/100) * valor2;}
  else if (valor2 <= 20000){ valor1 = 7; valor1 = (valor1/100) * valor2;}
  else if (valor2 <= 30000){ valor1 = 8;  valor1 = (valor1/100) * valor2;} 
  else if (valor2 <= 50000){ valor1 = 9;  valor1 = (valor1/100) * valor2;}
  else{ valor1 = 10; valor1= (valor1/100) * valor2;}

  printf("Digite a sal�rio do vendedor: ");
  scanf("%f", &valor2);
  valor1 = valor1 + valor2;

  printf("Sal�rio Final: R$%0.2f\n", valor1);
}
