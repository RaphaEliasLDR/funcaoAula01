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
	printf ("\n\nDigite o primeiro número: ");
	scanf ("%d", &primeiroNumero);
	
	printf ("\nDigite o segundo número: ");
	scanf ("%d", &segundoNumero);
	


cabecalho ();
	
	printf ("\n\nPrimeiro número: %d", primeiroNumero);
	printf ("\nsegundo número: %d", segundoNumero);	
	printf ("\nMédia: %.1f", calcularMedia(primeiroNumero, segundoNumero));
	
	return 0;
}
