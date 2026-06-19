#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){
	setlocale(LC_ALL, "portuguese");
	
printf("\n **************************************************** ");
printf("\n* Aluno: KAUAN PERES DE ALCANTARA - RA> 0025801 ");
printf("\n* Programa KPA-53 - Confirmar saída com 's'");	 
printf("\n *************************************************** \n");

	char opcao; 
	
	do{
		printf("\n ---------- CRUD ----------");
		printf("\n C - CRIAR USUARIO");
		printf("\n R - LER USUARIO");
		printf("\n U - ALTERAR USUARIO");
		printf("\n D - DELETAR USUÁRIO");
		printf("\n S - SAIR DO SISTEMA");
		printf("\n ESCOLHA UMA OPÇÃO: ");
		
		scanf(" %c", &opcao); 
		
		
		if(opcao == 'C' || opcao == 'c'){
			printf("\n Cadastro de cliente.....\n");
			
		} else if (opcao == 'R' || opcao == 'r'){
			printf("\n Ler Cliente.....\n");
			
		} else if (opcao == 'U' || opcao == 'u'){
			printf("\n Altera Cliente......\n"); 
			
		} else if (opcao == 'D' || opcao == 'd'){
			printf("\n Excluir cliente.......\n");
			
		} else if (opcao == 'S' || opcao == 's'){
			printf("\n Saindo do sistema....\n");
			 
		} else {
			printf("\n Opção inválida! Tente novamente!\n"); 
		} 
				
	} while (opcao != 'S' && opcao != 's'); 

	return 0; 
}

