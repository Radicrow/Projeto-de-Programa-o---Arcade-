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
	   
	    system("cls || clear");
	
	int sn, sn2, r1j1, r2j1, r3j1, r4j1, r5j1, score;

		printf("\nPERGUNTA E RESPOSTA\n\nSerao feitas 5 perguntas com 4 alternativas cada.\nSua pontuacao sera exibida no final\n\n"); 
		printf("Voce gostaria de comecar?\n\n1 - Sim   2 - Nao\n\nInsira o numero da sua escolha: ");
		scanf("%d", &sn);
		
		if(sn == 1)
		{
			int score = 0;
		    system("cls || clear");
		    printf("\n\nQual eh a capital do Brasil?\n\n1 - Sao Paulo   2 - Brasilia   3 - Rio de Janeiro   4 - Rio Grande do Sul\n\nInsira o numero da resposta certa: ");
	        scanf("%d", &r1j1);	
		}
		else
		{
			menu();
		}
		
		if(r1j1 == 2)
		{

			printf("PARABENS!!! voce acertou :)");
			score++;
		}
		else
		{   
			printf("Que pena, voce errou. A resposta certa era: Brasilia ");	
		}
		delay(2);
		system("cls || clear");
		printf("\n\nQual eh o pais mais populoso do mundo?\n\n1 - China   2 - Venezuela   3 - India   4 - Estados Unidos\n\nInsira o numero da resposta certa: ");
		scanf("%d", &r2j1);
		
		if(r2j1 == 1)
		{
			printf("PARABENS!!! voce acertou :)");
			score++;
		}
		else
		{
			printf("Que pena, voce errou. A resposta certa era: China ");	
		}
		delay(2);
		system("cls || clear");
		printf("\n\nQual das estruturas abaixo nao faz parte das sete maravilhas do mundo?\n\n1 - Cristo Redentor   2 - Muralha da China   3 - Mangueirao   4 - Coliseu\n\nInsira o numero da resposta certa: ");
		scanf("%d", &r3j1);
		
		if(r3j1 == 3)
		{   
			printf("PARABENS!!! voce acertou :)");
			score++;
		}
		else
		{
			printf("Que pena, voce errou. A resposta certa era: Mangueirao ");	
		}
		delay(2);
		system("cls || clear");
		printf("\n\nQual dos paises abaixo nao fala portugues?\n\n1 - Angola   2 - Mexico   3 - Brasil   4 - Portugal\n\nInsira o numero da resposta certa: ");
		scanf("%d", &r4j1);
		
		if(r4j1 == 2)
		{
			printf("PARABENS!!! voce acertou :)");
			score++;
		}
		else
		{   
			printf("Que pena, voce errou. A resposta certa era: Mexico ");	
		}
		delay(2);
		system("cls || clear");
		printf("\n\nQuantos titulos mundiais o Palmeiras tem?\n\n1 - Dois   2 - Quatro   3 - Um   4 - Zero\n\nInsira o numero da resposta certa: ");
		scanf("%d", &r5j1);
		
		if(r5j1 == 4)
		{
			printf("PARABENS!!! voce acertou :)");
			score++;
		}
		else
		{
			printf("Que pena, voce errou. A resposta certa era: Zero ");	
		}
		delay(2);
	    printf("\n\nVoce acertou %i/5 questoes\n\n\n", score);
	    printf("Voce quer jogar de novo?\n1 - Sim   2 - Nao\nInsira o numero da sua escolha: ");
	    scanf("%d", &sn2);
	    
	    if(sn2 == 1 )
	    {
	    	game_1();
		}
		else
		{
			menu();
		}
	}
	
void game_2()
    {
	    system("cls || clear");
	
	int sn3, sn4, ValorAleatorio, ValorAleatorio2, ValorAleatorio3, ValorAleatorio4, ValorAleatorio5, ValorAleatorio6, ValorAleatorio7, ValorAleatorio8, r1j2, r2j2, r3j2, r4j2;
	
		printf("\nCOBRA NA CAIXA!\n\nVoce e seu colega de trabalho estavam explorando a tumba do farao Neebe quando entraram em uma grande sala com escrituras na parede.\nEnquanto inspecionavam as escrituras, voces acidentalmente pressionaram um botao escondido que lacrou as portas, prendendo-os la dentro.\nEntao, cinco caixas apareceram no centro da sala, uma delas contendo o botao para abrir as portas, mas uma delas contem uma cobra mortal!\nVoces decidem jogar turnos para abrir uma caixa de cada vez, na esperanca de nao encontrar a cobra.\nEsse eh um jogo de sorte, onde ganha o jogador que descobrir a caixa que contem o botao e perde aquele que descobrir a caixa com a cobra.\nCada jogador deve informar seu primeiro nome e o computador escolhera aleatoriamente quem comeca abrindo a primeira caixa.\nO jogador escolhido deve escolher uma das cinco caixas e o computador informara se ha uma cobra, o botao ou nada dentro.\nDepois disso, a caixa escolhida nao pode mais ser escolhida.\n\n"); 
		printf("Voce quer comecar?\n\n1 - Sim   2 - Nao\n\nInsira o numero da sua escolha: ");
		scanf("%d", &sn3);
		
		if(sn3 == 1)
		{
		system("cls || clear");
		printf("\n\n*****   *****   *****   *****   *****\n");
		printf("* 1 *   * 2 *   * 3 *   * 4 *   * 5 *\n");
		printf("*****   *****   *****   *****   *****\n\n");
		printf("Escolha uma caixa: ");
		scanf("%d", &r1j2);
		
		srand(time(NULL));
		ValorAleatorio = rand() % 5 + 1;
		
		if(r1j2 == ValorAleatorio)
		{
			printf("A cobra te pegou :( \n\n");
			
			printf("Voce quer jogar de novo?\n\n1 - Sim   2 - Nao\n\nInsira o numero da sua escolha: ");
	    scanf("%d", &sn4);
	    
	    if(sn4 == 1 )
	    {
	    	game_2();
		}
		else
		{
			menu();
		}
	    }
	    
	    }
	    else
	    {
	    	menu();
		}
		
		srand(time(NULL));
		ValorAleatorio5 = rand() % 5 + 1;
		
		if(r1j2 == ValorAleatorio5)
		{
			printf("Voce achou o botao!! \n\n");
			
			printf("Voce quer jogar de novo?\n\n1 - Sim   2 - Nao\n\nInsira o numero da sua escolha: ");
	    scanf("%d", &sn4);
	    
	    if(sn4 == 1 )
	    {
	    	game_2();
		}
		else
		{
			menu();
		}
	    }
		
	    system("cls || clear");
	    printf("\n\n*****   *****   *****   *****\n");
		printf("* 1 *   * 2 *   * 3 *   * 4 *\n");
		printf("*****   *****   *****   *****\n\n");
		printf("Escolha uma caixa: ");
		scanf("%d", &r2j2);
	    
	    srand(time(NULL));
		ValorAleatorio2 = rand() % 4 + 1;
		
		if(r2j2 == ValorAleatorio2)
		{
			printf("A cobra te pegou :( \n\n");
			
			printf("Voce quer jogar de novo?\n\n1 - Sim   2 - Nao\n\nInsira o numero da sua escolha: ");
	    scanf("%d", &sn4);
	    
	    if(sn4 == 1 )
	    {
	    	game_2();
		}
		else
		{
			menu();
		}
	    }
	    
	    srand(time(NULL));
		ValorAleatorio6 = rand() % 4 + 1;
		
		if(r2j2 == ValorAleatorio6)
		{
			printf("Voce achou o botao!!! \n\n");
			
			printf("Voce quer jogar de novo?\n\n1 - Sim   2 - Nao\n\nInsira o numero da sua escolha: ");
	    scanf("%d", &sn4);
	    
	    if(sn4 == 1 )
	    {
	    	game_2();
		}
		else
		{
			menu();
		}
	    }
	    
	    system("cls || clear");
	    printf("\n\n*****   *****   *****\n");
		printf("* 1 *   * 2 *   * 3 *\n");
		printf("*****   *****   *****\n\n");
		printf("Escolha uma caixa: ");
		scanf("%d", &r3j2);
		
		srand(time(NULL));
		ValorAleatorio3 = rand() % 3 + 1;
		
			if(r3j2 == ValorAleatorio3)
		{
			printf("A cobra te pegou :( ");
			
			printf("Voce quer jogar de novo?\n\n1 - Sim   2 - Nao\n\nInsira o numero da sua escolha: ");
	    scanf("%d", &sn4);
	    
	    if(sn4 == 1 )
	    {
	    	game_2();
		}
		else
		{
			menu();
		}
	    }
	    
	    srand(time(NULL));
		ValorAleatorio7 = rand() % 3 + 1;
		
			if(r3j2 == ValorAleatorio7)
		{
			printf("Voce achou o botao!!! ");
			
			printf("Voce quer jogar de novo?\n\n1 - Sim   2 - Nao\n\nInsira o numero da sua escolha: ");
	    scanf("%d", &sn4);
	    
	    if(sn4 == 1 )
	    {
	    	game_2();
		}
		else
		{
			menu();
		}
	    }
	    
	    system("cls || clear");
	    printf("\n\n*****   *****\n");
		printf("* 1 *   * 2 *\n");
		printf("*****   *****\n\n");
		printf("Escolha uma caixa: ");
		scanf("%d", &r4j2);
		
		srand(time(NULL));
		ValorAleatorio4 = rand() % 2 + 1;
		
			if(r4j2 == ValorAleatorio4)
		{
			printf("A cobra te pegou :( ");
			
			printf("Voce quer jogar de novo?\n\n1 - Sim   2 - Nao\n\nInsira o numero da sua escolha: ");
	    scanf("%d", &sn4);
	    
	    if(sn4 == 1 )
	    {
	    	game_2();
		}
		else
		{
			menu();
		}
	    }
	    else
	    {
	    	printf("Voce achou o botao!!! ");
	    	
	    		printf("Voce quer jogar de novo?\n\n1 - Sim   2 - Nao\n\nInsira o numero da sua escolha: ");
	    scanf("%d", &sn4);
	    
	    if(sn4 == 1 )
	    {
	    	game_2();
		}
		else
		{
			menu();
		}
	    }
		}
void menu(){
	int escolha = 0;
	do{
	system("cls || clear");
	printf(" Menu\n 1: Pergunta e resposta\n 2: Cobra na caixa! \n 3: Gousmas War \n 4: Sair\n");
	printf("Selecione a opcao desejada: ");
	
	scanf("%i", &escolha);
	if (escolha == 1){
		game_1();
	}
	if (escolha == 2){
		game_2();
	}
	if (escolha ==4){
		printf("Saindo do programa ...");
		break;
	}
}
	while(escolha !=0);
}

int main(void)

{

	menu();
	
}
	

