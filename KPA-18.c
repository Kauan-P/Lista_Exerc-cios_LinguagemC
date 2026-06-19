#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

int main () {
	setlocale(LC_ALL, "portuguese");
printf("\n **************************************************** ");
printf("\n* Aluno: KAUAN PERES DE ALCANTARA - RA> 0025801 ");
printf("\n* Programa KPA-18 -  Login simples");	
printf("\n **************************************************** \n");


char usuario[20], senha[20];

	printf("\n Digite o nome usuário: "); 
	scanf("%s", usuario);
 
	printf("\n Digite a senha: ");
	scanf("%s", senha);

if(strcmp(usuario, "Messi") == 0 && strcmp(senha, "MaiorDaHistoria") == 0){
 
	printf("Login feito com sucesso! \n");

}else{
	
	printf("Usuário ou senha estão incorretos! Tente novamente!\n");	
}
return 0;
}
