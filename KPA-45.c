#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){
	setlocale(LC_ALL, "portuguese");
	
printf("\n **************************************************** ");
printf("\n* Aluno: KAUAN PERES DE ALCANTARA - RA> 0025801 ");
printf("\n* Programa KPA-45 - Menu até escolher sair");	
printf("\n *************************************************** \n");

	int opcao = 0;
	
	while(opcao!=3){
		printf("\n --------- CAIXA ELETRÔNICO ---------");
		printf("\n 1 Ver saldo");
		printf("\n 2 Sacar dinheiro");
		printf("\n 3  Sair");
		printf("\n Escolha uma opção: ");
		
		scanf("%d", &opcao);
		
		if(opcao== 1){
			
			printf("O saldo da conta é: 500,00 \n");
			
		} else if (opcao == 2){
			
			printf("Qual quantia deseja sacar ? \n");
			
		} else if (opcao == 3){
			
			printf("Obrigado por utilizar o nosso banco! \n");
			
		} else {
			
			printf ("Opção inválida! Tente novamente!");
			
		}
		
		
	}



}
