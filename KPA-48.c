#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){
	setlocale(LC_ALL, "portuguese");
	
printf("\n **************************************************** ");
printf("\n* Aluno: KAUAN PERES DE ALCANTARA - RA> 0025801 ");
printf("\n* Programa KPA-48 - Menu com opção de sair");	
printf("\n *************************************************** \n");



	int opcao = 0;
	
	 do{
	 	printf("\n ----- CAIXA ELETRÔNICO -----");
	 	printf("\n 1 - Mensagem");
	 	printf("\n 2 - Sair");
	 	printf("\n Digite umas das oções: "); 
	 	
	 	scanf("%d", &opcao);
	 	
	 	if(opcao==1){
	 		
	 		printf("\n Você escolheu a mensagem! ");
	 		
		 } else if (opcao==2){
		 	
		 	printf("\n Obrigado por utilizar o nosso banco!");
		 	
		  } else {
		  	
		  	printf("\n Opção inválida, tente novamente!");
		  } 
	 	
	 } while(opcao !=2);

}



