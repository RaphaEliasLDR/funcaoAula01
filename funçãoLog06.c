#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void cabecalho (){
	printf ("==========================================\n");
	printf ("\t\t SENAI-BA");
	printf ("\n==========================================");
}


void quantidadeParesEImpares (int numero[i]){
int pares = 0;
int impares = 0;
int i; 

for (i = 0; i < 6; i++){
	if (numero[i] % 2 == 0){
		pares++;
	}else {
		impares++;
	}
}
	printf ("\n\nQunatidade de números pares: %d", pares);
	printf ("\nQuantidade de números impares: %d", impares);
	
	return;
}


void limparTela(){
	system ("cls");
}


int main (){
	setlocale (LC_ALL, "portuguese");
	
int i;	
int numero[6];
	
	cabecalho();
	for (i = 0; i < 6; i++){
		printf ("\nInforme o %dº número: ", i+1);
		scanf ("%d", &numero[i]);
	}
	
	
	limparTela ();
	cabecalho ();
	quantidadeParesEImpares(numero);
	
	return 0;
}
