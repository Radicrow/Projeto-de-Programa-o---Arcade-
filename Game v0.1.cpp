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

void intro(){
	
	menu();
}

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
		printf("\n\nQual tipo sanguineo eh considerado doador universal?\n\n1 - O Positivo   2 - O Negativo   3 - B Negativo   4 - AB Positivo\n\nInsira o o valor equivalente a resposta correta: ");
	        scanf("%d", &q1);
	    if(q1 == 2){
	    	printf("PARABENS!!! Voce acertou :)");
	    	score++;
		}
		else
		{
		printf("Que pena, voce errou. A resposta certa era: O Negativo ");	
		}
		
		delay(2);
		system("cls || clear");
		printf("\n\nQual eh o pais mais populoso do mundo?\n\n1 - China   2 - Venezuela   3 - India   4 - Estados Unidos\n\nInsira o o valor equivalente a resposta correta: ");
		scanf("%d", &q2);
		
		if(q2 == 1)
		{
			printf("PARABENS!!! Voce acertou :)");
			score++;
		}
		else
		{
			printf("Que pena, voce errou. A resposta certa era: China ");	
		}
		
		delay(2);
		system("cls || clear");
		printf("\n\nQuantos satelites naturais conhecidos o planeta Netuno possui?\n\n1 - 18   2 - 9   3 - 14   4 - 23\n\nInsira o o valor equivalente a resposta correta: ");
		scanf("%d", &q3);
		
		if(q3 == 3)
		{
			printf("PARABENS!!! Voce acertou :)");
			score++;
		}
		else
		{
			printf("Que pena, voce errou. A resposta correta era 14 ");	
		}
		
		delay(2);
		system("cls || clear");
		printf("\n\nQual dos paises abaixo nao fala portugues?\n\n1 - Angola   2 - Mexico   3 - Brasil   4 - Portugal\n\nInsira o o valor equivalente a resposta correta: ");
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
		printf("\n\nComo se chama o medo de flores?\n\n1 - Plantaephobia   2 - Flosphobia   3 - Floraphobia   4 - Antophobia\n\nInsira o o valor equivalente a resposta correta: ");
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
	int sn;
	do{
	system("cls || clear");
	printf("Gousmas War\n");
	printf("Nas distantes terras de Liima, eh comum as pessoas capturarem Gousmas para lutar. \nUse seu intelecto para derrotar seu oponente em um combate!\n\n");
	printf("REGRAS:\nDurante a luta, cada participante comeca com duas Gousmas em campo e com o nivel de furia igual a 1.\nAo escolher uma Gousma para atacar, todo o nivel de furia do atacante e transferido para a Gousma atacada.\nQuando a Gousma atacada alcança um nivel de furia maior que 5, ela eh desintegrada.\n");
	printf("\nComo a Gousma eh feita de um liquido viscoso isso permite que durante a luta uma Gousma pode se dividir em duas,\ntransferindo uma quantidade selecionada de furia para a outra Gousma. Por exemplo, se uma unica Gousma em campo tem 4\nde furia, pode ser dividida em outra Gousma passando 1 de furia, assim,teremos uma Gousma com 3 de furia e outra\ncom 1 de furia. \n\nO limite maximo de Gousmas em campo e de dois para cada treinador.\nSe um jogador tem todas as Gousmas derrotadas, ele perde o jogo.\n");
	printf("\nVoce gostaria de comecar?\n\n1 - Sim   2 - Nao\n\nInsira o valor da sua escolha: ");
	scanf("%d", &sn);
	if(sn == 1){
		system("cls||clear");
	int p1_left = 1, p1_right = 1, p2_left = 1, p2_right = 1;
    int turno, atacante, alvo, raiva_1, raiva_2, movimento, transf;

    srand(time(NULL));

    // Decide quem vai primeiro
    turno = rand() % 2 + 1;

    printf("Bem vindo ao Gousma Wars!\n");
    printf("Treinador 1 ((1)Gousma 1: %d, (2)Gousma 2: %d)\n", p1_left, p1_right);
    printf("Treinador 2 ((3)Gousma 1: %d, (4)Gousma 2: %d)\n", p2_left, p2_right);
    

    do {
        printf("\nTurno do treinador %d. \n\n", turno);
        printf("Voce gostaria de atacar ou dividir?\n(Atacar: 1, Dividir:2)");
        scanf("%i", &movimento);
        
        if (movimento == 1){
        printf("Insira o atacante: ");
        scanf("%i", &atacante);
        printf("Insira o alvo: ");
        scanf("%i", &alvo);


    if (turno == 1){
	if (atacante == 1 && p1_left !=0) {
        raiva_1 = p1_left;
        } 
	else if (atacante == 2 && p1_right !=0) 
		{
        raiva_1 = p1_right;
        }
	else {
		printf("Movimento invalido, por favor tente novamente");
		delay(2);
		system("cls||clear");
		printf("Treinador 1 ((1)Gousma 1: %d, (2)Gousma 2: %d)\n", p1_left, p1_right);
        printf("Treinador 2 ((3)Gousma 1: %d, (4)Gousma 2: %d)\n", p2_left, p2_right);
		continue;
			}
	 if (alvo == 3 &&  p2_left!= 0) {
            p2_left += raiva_1;
        } else if (alvo == 4 && p2_right !=0) {
            p2_right += raiva_1;}
        else{
        printf("Movimento invalido, por favor tente novamente");
		delay(2);
		system("cls||clear");
		printf("Treinador 1 ((1)Gousma 1: %d, (2)Gousma 2: %d)\n", p1_left, p1_right);
        printf("Treinador 2 ((3)Gousma 1: %d, (4)Gousma 2: %d)\n", p2_left, p2_right);
		continue;
		}
		}
		
		
if (turno == 2){
	if (atacante == 3 && p2_left !=0) {
        raiva_2 = p2_left;
    }
	else if (atacante == 4 && p2_right !=0) {
        raiva_2 = p2_right;}
	else {
		printf("Movimento invalido, por favor tente novamente");
		delay(2);
		system("cls||clear");
		printf("Treinador 1 ((1)Gousma 1: %d, (2)Gousma 2: %d)\n", p1_left, p1_right);
        printf("Treinador 2 ((3)Gousma 1: %d, (4)Gousma 2: %d)\n", p2_left, p2_right);
		continue;
			}
	 if (alvo == 1 && p1_left !=0) {
            p1_left += raiva_2;
        } else if (alvo == 2 && p1_right !=0) {
            p1_right += raiva_2;}
        else{
        printf("Movimento invalido, por favor tente novamente");
		delay(2);
		system("cls||clear");
		printf("Treinador 1 ((1)Gousma 1: %d, (2)Gousma 2: %d)\n", p1_left, p1_right);
        printf("Treinador 2 ((3)Gousma 1: %d, (4)Gousma 2: %d)\n", p2_left, p2_right);
		continue;
		}
		}
	}
	else if (movimento == 2){
		if ((turno == 1 && (p1_left !=0 && p1_right !=0)) || (turno == 2 && (p2_left !=0 && p2_right !=0))){
		printf("Movimento invalido! Nenhum de seus Gousmas foi derrotado!");
		delay(3);
		system("cls||clear");
		printf("Treinador 1 ((1)Gousma 1: %d, (2)Gousma 2: %d)\n", p1_left, p1_right);
        printf("Treinador 2 ((3)Gousma 1: %d, (4)Gousma 2: %d)\n", p2_left, p2_right);
		continue;
		}
		else if (turno == 1 && (p1_left ==0 || p1_right ==0)){
		printf("Quanto de furia voce gostaria de transferir?");
		scanf("%i", &transf);
			if (transf>= p1_left && transf>=p1_right){
				printf("Movimento invalido, por favor tente novamente");
				delay(2);
				system("cls||clear");
				printf("Treinador 1 ((1)Gousma 1: %d, (2)Gousma 2: %d)\n", p1_left, p1_right);
        		printf("Treinador 2 ((3)Gousma 1: %d, (4)Gousma 2: %d)\n", p2_left, p2_right);
				continue;	
			}
			else if(p1_left > 0) {
				p1_left = p1_left - transf;
				p1_right = transf;
			}
			else if(p1_right > 0) {
				p1_right = p1_right - transf;
				p1_left = transf;
			}
			
		}
		else if (turno == 2 && (p2_left ==0 || p2_right ==0)){
		printf("Quanto de furia voce gostaria de transferir?");
		scanf("%i", &transf);
			if (transf >= p2_left && transf>=p2_right){
				printf("Movimento invalido, por favor tente novamente");
				delay(2);
				system("cls||clear");
				printf("Treinador 1 ((1)Gousma 1: %d, (2)Gousma 2: %d)\n", p1_left, p1_right);
        		printf("Treinador 2 ((3)Gousma 1: %d, (4)Gousma 2: %d)\n", p2_left, p2_right);
				continue;	
			}
			else if(p2_left > 0) {
				p2_left = p2_left - transf;
				p2_right = transf;
			}
			else if(p1_right > 0) {
				p2_right = p2_right - transf;
				p2_left = transf;}
			}
	}
	else{
	printf("Movimento invalido, por favor tente novamente");
	delay(2);
	system("cls||clear");
	printf("Treinador 1 ((1)Gousma 1: %d, (2)Gousma 2: %d)\n", p1_left, p1_right);
    printf("Treinador 2 ((3)Gousma 1: %d, (4)Gousma 2: %d)\n", p2_left, p2_right);
	continue;	
	}
		
		if (p1_left>= 5){
			p1_left = 0;
		}
		if (p1_right>= 5){
			p1_right = 0;
		}
		if (p2_left>= 5){
			p2_left = 0;
		}
		if (p2_right>= 5){
			p2_right= 0;
		}
		
		
        if (p1_left == 0 && p1_right == 0) {
            printf("Todas as Gousmas do Treinador 1 foram derrotadas!\nTreinador 2 venceu!!\n");
            break;
        }
        if (p2_left ==0 && p2_right == 0) {
            printf("Todas as Gousmas do Treinador 2 foram derrotadas!\nTreinador 1 venceu!!\n");
            break;

        }

    	system("cls||clear");
    	turno = turno == 1 ? 2 : 1;
        printf("Treinador 1 ((1)Gousma 1: %d, (2)Gousma 2: %d)\n", p1_left, p1_right);
        printf("Treinador 2 ((3)Gousma 1: %d, (4)Gousma 2: %d)\n", p2_left, p2_right);
    } while (1);
}
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
		printf("Por favor escolha um valor valido");
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
