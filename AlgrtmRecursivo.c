/*Fazer a tabela do brasileir�o, buscar nome e posi��o,
exibir os 5 primeiros colocados, os 5 �ltimos colocados
e exibir a diferen�a de pontos dos 5 �ltimos e exibir a
diferen�a de pontos dos 5 primeiros e reordenar a tabela
para exibir metade dos times*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	char time[20][40]={"Palmeiras","Flamengo","Botafogo","Atletico-MG","Gremio","Bragantino","Fluminense","Athletico-PR","Cuiaba","Sao Paulo","Internacional","Fortaleza","Cruzeiro","Corinthians","Santos","Vasco","Bahia","Goias","Coritiba","America-MG"};
	int pontos[20]={63,63,62,60,59,59,53,52,48,47,46,45,44,44,43,42,41,35,29,21},i,maior;
	printf("\nTabela Brasileirao Serie A\n");
	for(i=0;i<=19;i++){
		printf("\n%i. %s | P: %i\n",i+1,time[i],pontos[i]);
    }
    maior=0;
    for(i=0;i<=19;i++){
    	if(pontos[i]>pontos[maior]){
    		pontos[maior]=pontos[i];
		}
	}
	/*for(i=0;i<4;i++){
        pontos[maior]=pontos[i];
    }*/
	printf("\nOs primeiros colocados:\n");
	/*for(i=0;i<4;i++){*/
		printf("Pontos: %i | Time: %s\n",pontos[maior],time[maior]);
	//}
}
