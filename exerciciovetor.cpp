#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int num[10];
	int i = 0;
	int busca = -1;
	int result = 0;
	int posicao = 0;
	
	for (i = 0; i< 10; i++)	{
			
		printf ("Digite um numero\n");
		scanf ("%d", &num[i]);
	
	}
	
//	for (i = 0; i< 10; i++) {
//		
//		printf ("%d, ", num[i]); 
//	}
	
	
	printf ("Digite o numero que vc quer buscar\n");
	scanf ("%d", &busca);
	
		for ( i = 0; i< 10; i++) {	
				
			if (busca == num[i]){
			 posicao = i;
			 	
			result ++;
			
		}
				
		}	
		
	
			if (result == 0){
					
				printf("numero nao econtrado\n");	
				
			
			}
			
			else if (result == 1){
				
				printf("O numero %d esta na posicao %d", busca, posicao);
			}
			
			else {
				
				printf("O numero %d esta na posicao %d e aparece %d vezes na tela", busca, posicao, result);						    
			} 
				
			
				
	
		
	
}
