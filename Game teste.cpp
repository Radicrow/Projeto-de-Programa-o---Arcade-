#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void delay(int segundos)
{
    int milli_seconds = 1000 * segundos;
 
    clock_t start_time = clock();
 
    while (clock() < start_time + milli_seconds)
        ;
    }

void menu();

void game_1(){
	system("cls");
	int escolha, sn, sn2, q1, q2, q3, q4, q5;
	printf("\nPERGUNTA E RESPOSTA\n\nSerao feitas 5 perguntas com 4 alternativas cada.\nSua pontuacao sera exibida no final\n\n"); 
		printf("Voce gostaria de comecar?\n\n1 - Sim   2 - Nao\n\nInsira o valor da sua escolha: ");
		scanf("%d", &sn);
		if(sn == 1)
		{
		int score = 0;
		system("cls || clear");
		printf("\n\nQual eh a capital do Brasil?\n\n1 - Sao Paulo   2 - Brasilia   3 - Rio de Janeiro   4 - Rio Grande do Sul\n\nInsira o numero da resposta certa: ");
	        scanf("%d", &q1);
	    if(q1 == 2){
	    	printf("PARABENS!!! Voce acertou :)");
	    	score++;
		}
		else
		{
		printf("Que pena, voce errou. A resposta certa era: Brasilia ");	
		}
		
		delay(2);
		system("cls || clear");
		printf("\n\nQual eh o pais mais populoso do mundo?\n\n1 - China   2 - Venezuela   3 - India   4 - Estados Unidos\n\nInsira o numero da resposta certa: ");
		scanf("%d", &q2);
		
		if(q2 == 1)
		{
			printf("PARABENS!!! Voce acertou :)");
			score++;
		}
		else
		{
			printf("Que pena, oce errou. A resposta certa era: China ");	
		}
		
		delay(2);
		system("cls || clear");
		printf("\n\nQual das estruturas abaixo nao faz parte das sete maravilhas do mundo?\n\n1 - Cristo Redentor   2 - Muralha da China   3 - Mangueirao   4 - Coliseu\n\nInsira o numero da resposta certa: ");
		scanf("%d", &q3);
		
		if(q3 == 3)
		{
			printf("PARABENS!!! Voce acertou :)");
			score++;
		}
		else
		{
			printf("Que pena, voce errou. A resposta certa era: Mangueirao ");	
		}
		
		delay(2);
		system("cls || clear");
		printf("\n\nQual dos paises abaixo nao fala portugues?\n\n1 - Angola   2 - Mexico   3 - Brasil   4 - Portugal\n\nInsira o numero da resposta certa: ");
		scanf("%d", &q4);
		
		if(q4 == 2)
		{
			printf("PARABENS!!! Voce acertou :)");
			score++;
		}
		else
		{
			printf("Que pena, voce errou. A resposta certa era: Mexico ");	
		}
		
		delay(2);
		system("cls || clear");
		printf("\n\nComo se chama o medo de flores?\n\n1 - Plantaephobia   2 - Flosphobia   3 - Floraphobia   4 - Antophobia\n\nInsira o numero da resposta certa: ");
		scanf("%d", &q5);
		
		if(q5 == 4)
		{
			printf("PARABENS!!! Voce acertou :)");
			score++;
		}
		else
		{
			printf("Que pena, voce errou. A resposta certa era: Antophobia ");	
		}
		delay(2);
		system("cls || clear");
		
		printf("Voce acertou %i/5 questoes\n", score);
		
		}
		else{
			system("cls || clear");
			printf("Deseja retornar ao menu?(1:Sim   2: Nao)");
			int mn;
			scanf("%i", &mn);
			if (mn == 1){
				menu();
			}
			else{ game_1();
			}
		}
	printf("Deseja jogar novamente? (1: Sim/2:Nao): ");
	scanf("%i", &escolha);
	if (escolha == 1){
		game_1();
	}	
	else if (escolha == 2){
		printf("Retornando ao menu");
		delay(2);
		system("cls || clear");
		menu();
	}
	else{
		printf("Por favor escolha um valor valido\n");
	}
}

void game_2(){
	system("cls || clear");
	int escolha;
	printf("Cobra na caixa!\n");
	
	printf("Deseja jogar novamente? (1: Sim/2:Nao): ");
	scanf("%i", &escolha);
	if (escolha == 1){
		game_2();
	}	
	else if (escolha == 2){
		printf("Retornando ao menu...");
		delay(2);
		system("cls || clear");
		menu();
	}
	else{
		printf("Por favor escolha um valor valido");
	}
}

void game_3(){
	int escolha = 0;
	do{
	system("cls || clear");
	printf("Gousmas War\n");
	
	printf("Deseja jogar novamente? (1: Sim/2:Nao): ");
	scanf("%i", &escolha);
	if (escolha == 1){
		system("cls||Clear");
		game_3();
	}	
	else if (escolha == 2){
		printf("Retornando ao menu...");
		delay(2);
		system("cls || clear");
		menu();
	}
	else{
		printf("Por favor escolha um valor v?lido");
		escolha = 0;
	}
}
	while (escolha !=0);
}

void menu(){
	int escolha = 0;
	do{
	system("cls || clear");
	printf("Menu\n 1: Pergunta e resposta\n 2: Cobra na caixa! \n 3: Gousmas War \n 4: Sair\n");
	printf("Selecione o jogo desejado: ");
	
	scanf("%i", &escolha);
	if (escolha == 1){
		game_1();
	}
	if (escolha == 2){
		game_2();
	}
	if (escolha == 3){
		game_3();
	}
	if (escolha ==4){
		printf("Saindo do aplicativo...");
		break;
	}
}
	while(escolha !=0);
}

int main(void){
	menu();
}
