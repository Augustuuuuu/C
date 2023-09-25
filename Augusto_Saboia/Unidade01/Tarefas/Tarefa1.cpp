#include <stdio.h> // Carregando a biblioteca Standart Inpu Output para usarmos printf e scanf
#include <locale.h> // Carregando a biblioteca que utilize as configura��es do Sistema Operacional
/* Vers�o 01:

Escreva um algoritmo que solicite ao usu�rio duas notas e ao final apresente a mensagem
de Aluno aprovado ou n�o conforme a m�dia aritm�tica das duas notas considerando que a 
m�dia de aprova��o seja maior ou igual a sete (M�dia >=)

Vers�o 02: 

Implementar no algoritmo a funcionabilidade de realizar o exame final
Ser� solicitada a nota do exame final e a nova m�dia ser� calculada da seguinte forme:
NovaMedia = (MediaAnterior + NotaExameFinal) / 2
Se maior ou igual a 7.0 ent�o: Aprovado apos o exame final 
Sen�o: Reprovado no exame final

Vers�o 03:

O cliente agora quer configurar a m�dia para aprova��o na faculdade, ou seja, n�o deve
mais ser a m�dia 7.0 fixa. O programa dever� solicitar ao usu�rio a m�dia a ser utilizada
e passar a calcular conforme a configura��o ao usu�rio.

Vers�o 04:

O aluno somente poder� realizar exame final se a m�dia for pelo menos a nota 3.0 (tr�s)

Vers�o 05:

Agora o cliente quer aplicar cinco provas em vez de apenas duas
Obs.: N�o pode usar mais que quatro vari�veis

Versao06:
O cliente agora quer configurar a m�dia m�nima para prosseguir p/ exame final, ou seja, 
n�o deve nmais ser a m�dia m�nima 3.0 (fixa). O programa dever� solicitar ao usu�rio a 
m�dia m�nima pra prosseguir a ser utilizada e passar a calcular conforme a configura��o do usu�rio
*/
   
int main() {  // Estamos abrindo o m�todo principal (main) do programa
// Entrada
float Nota, MediaFacul, Soma;

setlocale(LC_ALL, "Portuguese"); // Para usarmos o padr�o Brasileiro
// M�dia da faculdade
printf("Digite a m�dia a ser utilizada pela faculdade: ");
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
	printf("Parab�ns por sua aprova��o!");	
}
else if ((Soma) /5 >= 3){
	printf("Voc� EST� REPROVADO! \n");
	printf("Sua m�dia foi %f fazer o Exame Final \n",(Soma) / 5);
	printf("Digite sua nota do Exame Final: ");
	scanf("%f", &Nota);
	if(((Soma) /5 + Nota) / 2 >= MediaFacul){
		printf("Voc� foi aprovado ap�s o Exame Final");
	}
	else{
		printf("Reprovado no Exame Final");
	}
}
else{
	printf("Sua m�dia foi menor que 3. \n Reprovado!");
}	
} // Estamos fechando o m�todo principal (main) do programa




