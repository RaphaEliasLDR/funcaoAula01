#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void cabecalho (){
	printf ("==========================================\n");
	printf ("\t\t SENAI-BA");
	printf ("\n==========================================");
}

void limparTela(){
	system ("cls");
}


int main (){
	
	char nome [200];
	int idade;
	
cabecalho ();
	
		
	printf ("\n\nDigete seu nome: ");
	gets (nome);
	
	
limparTela ();	
cabecalho ();


	printf ("\n\nDigete sua idade: ");
	scanf ("%d", &idade);
	
	
limparTela ();	
cabecalho ();

	printf ("\n\nNome: %s", nome);
	printf ("\nIdade: %d", idade);
	
	
	
	
	
	return 0;
}
