#include <stdio.h> // Carregando a biblioteca Standart Inpu Output para usarmos printf e scanf
#include <locale.h> // Carregando a biblioteca que utilize as configurações do Sistema Operacional
/* Versão 01:

Escreva um algoritmo que solicite ao usuário duas notas e ao final apresente a mensagem
de Aluno aprovado ou não conforme a média aritmética das duas notas considerando que a 
média de aprovação seja maior ou igual a sete (Média >=)

Versão 02: 

Implementar no algoritmo a funcionabilidade de realizar o exame final
Será solicitada a nota do exame final e a nova média será calculada da seguinte forme:
NovaMedia = (MediaAnterior + NotaExameFinal) / 2
Se maior ou igual a 7.0 então: Aprovado apos o exame final 
Senão: Reprovado no exame final

Versão 03:

O cliente agora quer configurar a média para aprovação na faculdade, ou seja, não deve
mais ser a média 7.0 fixa. O programa deverá solicitar ao usuário a média a ser utilizada
e passar a calcular conforme a configuração ao usuário.

Versão 04:

O aluno somente poderá realizar exame final se a média for pelo menos a nota 3.0 (três)

Versão 05:

Agora o cliente quer aplicar cinco provas em vez de apenas duas
Obs.: Não pode usar mais que quatro variáveis

Versao06:
O cliente agora quer configurar a média mínima para prosseguir p/ exame final, ou seja, 
não deve nmais ser a média mínima 3.0 (fixa). O programa deverá solicitar ao usuário a 
média mínima pra prosseguir a ser utilizada e passar a calcular conforme a configuração do usuário
*/
   
int main() {  // Estamos abrindo o método principal (main) do programa
// Entrada
float Nota, MediaFacul, Soma;

setlocale(LC_ALL, "Portuguese"); // Para usarmos o padrão Brasileiro
// Média da faculdade
printf("Digite a média a ser utilizada pela faculdade: ");
scanf("%f", &MediaFacul);

printf("Informe a primeira nota: ");
scanf("%f", &Nota);
Soma = Nota;
printf("Informe a segunda nota: ");
scanf("%f", &Nota);
Soma = Soma + Nota;
printf("Informe a terceira nota: ");
scanf("%f", &Nota);
Soma = Soma + Nota;
printf("Informe a quarta nota: ");
scanf("%f", &Nota);
Soma = Soma + Nota;
printf("Informe a  quinta nota: ");
scanf("%f", &Nota);
Soma = Soma + Nota;

// Processamento
if ((Soma) /5 >= MediaFacul){
	printf("Parabéns por sua aprovação!");	
}
else if ((Soma) /5 >= 3){
	printf("Você ESTÁ REPROVADO! \n");
	printf("Sua média foi %f fazer o Exame Final \n",(Soma) / 5);
	printf("Digite sua nota do Exame Final: ");
	scanf("%f", &Nota);
	if(((Soma) /5 + Nota) / 2 >= MediaFacul){
		printf("Você foi aprovado após o Exame Final");
	}
	else{
		printf("Reprovado no Exame Final");
	}
}
else{
	printf("Sua média foi menor que 3. \n Reprovado!");
}	
} // Estamos fechando o método principal (main) do programa




