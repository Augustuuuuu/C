#include <stdio.h> // Carregando a biblioteca Standart Inpu Output para usarmos printf e scanf
#include <locale.h> // Carregando a biblioteca que utilize as configura��es do Sistema Operacional
/* Vers�o 01:
 Escreva um algoritmo que solicite ao usus�rio duas notas e ao final apresente a mensagem
 de Aluno aprovado ou n�o conforme a m�dia aritm�tica das duas notas considerando que a 
m�dia de aprova��o seja maior ou igual a sete (M�dia >=)
*/
   
int main() {  // Estamos abrindo o m�todo principal (main) do programa
// Entrada
float Nota1, Nota2, Media;

setlocale(LC_ALL, "Portuguese"); // Para usarmos o padr�o Brasileiro
printf("Informe a primeira nota: ");
scanf("%f", &Nota1);
printf("Informe a segunda nota: ");
scanf("%f", &Nota2);

// Processamento
Media = (Nota1 + Nota2) / 2;


// Sa�da 
if (Media >= 7)
	printf("Parab�ns por sua aprova��o!");
else
	printf("Parab�ns por sua aprova��o!");
} // Estamos fechando o m�todo principal (main) do programa




