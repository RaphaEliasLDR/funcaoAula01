#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void cabecalho (){
	printf ("==========================================\n");
	printf ("\t\t SENAI-BA");
	printf ("\n==========================================");
}

void limparTela(){
	system ("cls");
}

float calcularMedia (int primeiroNumero, int segundoNumero){
	float media;
	media = (primeiroNumero+ segundoNumero) / (float)2;
	return media;
}


int main (){

setlocale (LC_ALL, "portuguese");
				
int primeiroNumero;
int segundoNumero;
int soma;
	
	
	cabecalho ();
	printf ("\n\nDigite o primeiro n�mero: ");
	scanf ("%d", &primeiroNumero);
	
	printf ("\nDigite o segundo n�mero: ");
	scanf ("%d", &segundoNumero);
	


cabecalho ();
	
	printf ("\n\nPrimeiro n�mero: %d", primeiroNumero);
	printf ("\nsegundo n�mero: %d", segundoNumero);	
	printf ("\nM�dia: %.1f", calcularMedia(primeiroNumero, segundoNumero));
	
	return 0;
}
