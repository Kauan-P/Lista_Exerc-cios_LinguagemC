#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){
	setlocale(LC_ALL, "portuguese");
	
	printf("\n **************************************************** ");
	printf("\n* Aluno: KAUAN PERES DE ALCANTARA - RA> 0025801 ");
	printf("\n* Programa KPA-58 - A Calculadora de Bolso de 4 Operações");	
	printf("\n *************************************************** \n");

	float num1, num2, resultado;
	char operacao;

	printf("Digite o primeiro número: ");
	scanf("%f", &num1);

	printf("Digite a operação (+, -, *, /): ");
	scanf(" %c", &operacao); 

	printf("Digite o segundo número: ");
	scanf("%f", &num2);

	switch(operacao) {
		case '+':
			resultado = num1 + num2;
			printf("\nResultado: %.2f + %.2f = %.2f\n", num1, num2, resultado);
			break;
			
		case '-':
			resultado = num1 - num2;
			printf("\nResultado: %.2f - %.2f = %.2f\n", num1, num2, resultado);
			break;
			
		case '*':
			resultado = num1 * num2;
			printf("\nResultado: %.2f * %.2f = %.2f\n", num1, num2, resultado);
			break;
			
		case '/':
			
			if(num2 != 0) {
				resultado = num1 / num2;
				printf("\nResultado: %.2f / %.2f = %.2f\n", num1, num2, resultado);
			} else {
				printf("\nErro: Não é possível dividir por zero!\n");
			}
			break;
			
		default:
			printf("\nOperação matemática não reconhecida\n");
			break;
	}

	return 0;
}
