#include <stdio.h> // Carregando a biblioteca Standart Inpu Output para usarmos printf e scanf
#include <locale.h> // Carregando a biblioteca que utilize as configurações do Sistema Operacional
/* Versão 01:
 Escreva um algoritmo que solicite ao ususário duas notas e ao final apresente a mensagem
 de Aluno aprovado ou não conforme a média aritmética das duas notas considerando que a 
média de aprovação seja maior ou igual a sete (Média >=)
*/
   
int main() {  // Estamos abrindo o método principal (main) do programa
// Entrada
float Nota1, Nota2, Media;

setlocale(LC_ALL, "Portuguese"); // Para usarmos o padrão Brasileiro
printf("Informe a primeira nota: ");
scanf("%f", &Nota1);
printf("Informe a segunda nota: ");
scanf("%f", &Nota2);

// Processamento
Media = (Nota1 + Nota2) / 2;


// Saída 
if (Media >= 7)
	printf("Parabéns por sua aprovação!");
else
	printf("Parabéns por sua aprovação!");
} // Estamos fechando o método principal (main) do programa




