#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){
         setlocale(LC_ALL, "portuguese");
printf("\n **************************************************** ");
printf("\n* Aluno: KAUAN PERES DE ALCANTARA - RA> 0025801 ");
printf("\n* Programa KPA-16 - Múltiplo de 3 e/ou 5");	
printf("\n **************************************************** \n");

int num; 

	printf("\n Digite o número do pedido: ");
	scanf("%d",&num);

if(num % 3 ==0){

 	printf("\n Parabéns! Você ganhou um refrigerante!"); 

} else if (num % 5 == 0){

	printf("\n Parabéns! Você ganhou uma sobremesa!");

} else if (num % 3 == 0 && num % 5 == 0) {

	printf("\n Parabéns! Você ganhou um refrigerante e uma sobremesa!");

}else{

	printf("\n Parabéns! Você ganhou um refrigerante e a sobremesa!");

}

return 0;


}
