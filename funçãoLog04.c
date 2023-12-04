#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void cabecalho (){
	printf ("==========================================\n");
	printf ("\t\t SENAI-BA");
	printf ("\n==========================================");
}


void verificarParOuImpar (int numero){
	
	if (numero % 2 == 0){
		printf ("\n\n%d é par. ", numero);
	}else {
		printf ("\n\n%d é impar. ");
	}
}


void limparTela(){
	system ("cls");
}


int main (){
	setlocale (LC_ALL, "portuguese");
	
	int numero;
	
	cabecalho ();
	
	printf ("\n\nDigite um numero: ");
	scanf("%d",&numero);
	
	
	limparTela();
	cabecalho ();
	verificarParOuImpar(numero);
	
	return 0;
}
