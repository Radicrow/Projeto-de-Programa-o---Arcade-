#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <windows.h>



void delay(int segundos)
{
    int milli_seconds = 1000 * segundos;
 
    clock_t start_time = clock();
 
    while (clock() < start_time + milli_seconds)
        ;
    }
    
void delay_2(int segundos)
{
    int milli_seconds = segundos;
 
    clock_t start_time = clock();
 
    while (clock() < start_time + milli_seconds)
        ;
    }

void menu();

void intro(void){
	 int frame = 0;
    int x = 0;

    while (frame < 600) { 
        system("cls"); 
        printf("\n\n\n\n                                                        URRRRUUUUUUUUR                  \n");
printf("                                                    UBRUUUUUUUUUUUUUUUUUUU               \n");
printf("                                                URUUUUUUURURUUUUUUUUUUUUUUUU             \n");
printf("                                              RUUUUUUUUUUUUUUUUUUUUUUUUUUUUR             \n");
printf("                                             BUUUUUUUURUUUUUUUUUUUUURUUUUUUUU            \n");
printf("                                           URUUUURURUUUUURRRRRRRUUUUUUUUUR               \n");
printf("                                            BUU       UBUUUUUUUUUUUUUUR                  \n");
printf("                                                  RUUUUUUUUUUUUUUUURURBUUUURURU          \n");
printf("                                               UUUUUUUUUUUUUUUBBUUBBBBBBUURRRRRRRB       \n");
printf("                                               UUUUUUUURRRBBBBBBBBUBBBUBRRRRRRRRRRUU     \n");
printf("                                                 URRUBBBBBBBBBUBBBURUURRRRRRRRRRRRRRRU   \n");
printf("                                               RBBBBBBBBUBBUUBUUUBURRRRRRRRRRRRRRRRRRRRR \n");
printf("                                               UUUBBUUBUUUUUUUUUURRURRRRRRRRRRRRRRRRRRR  \n");
printf("                                              UUUUUURRRRURURUURRRRRRRRRRRRRRRRRRRRRRRRR  \n");
printf("                                               URURRRRRRUURRRRRRRRRRRRRRRRRRRRRRRRRRRU   \n");
printf("\n\n                                                       TEAM VULTURE APRESENTA                  \n\n\n\n\n");
delay(5);

         printf("          AAAAAAAA        RRRRRRRRRRRRRRRRR         CCCCCCCCCCC            AAAAAAAA        DDDDDDDDDDDDDDD       EEEEEEEEEEEEEEEEE\n");
         delay_2(300);
         printf("          AAAAAAAA        RRRRRRRRRRRRRRRRRR       CCCCCCCCCCCCC           AAAAAAAA        DDDDDDDDDDDDDDDDD     EEEEEEEEEEEEEEEEE\n");
         delay_2(300);
         printf("         AAAAAAAAA        RRRRRRRRRRRRRRRRRR      CCCCCCCCCCCCCCCC        AAAAAAAAA        DDDDDDDDDDDDDDDDDD    EEEEEEEEEEEEEEEEE\n");
         delay_2(300);
         printf("         AAAAAAAAAA       RRRRRRRRRRRRRRRRRRR    CCCCCCCCCCCCCCCCC        AAAAAAAAAA       DDDDDDDDDDDDDDDDDD    EEEEEEEEEEEEEEEEE\n");
         delay_2(300);
		 printf("         AAAAAAAAAA       RRRRRR      RRRRRRR   CCCCCCCCC CCCCCCCCC       AAAAAAAAAA       DDDDDD   DDDDDDDDDD   EEEEE            \n");
         delay_2(300);
		 printf("        AAAAAAAAAAA       RRRRRR       RRRRRR   CCCCCCC     CCCCCCC      AAAAAAAAAAA       DDDDDD      DDDDDDD   EEEEE            \n");
         delay_2(300);
		 printf("        AAAAAAAAAAAA      RRRRRR       RRRRRR  CCCCCCC       CCCCCC      AAAAAAAAAAAA      DDDDDD       DDDDDD   EEEEE            \n");
         delay_2(300);
		 printf("       AAAAAA AAAAAA      RRRRRR       RRRRRR  CCCCCC                   AAAAAA AAAAAA      DDDDDD       DDDDDDD  EEEEE            \n");
         delay_2(300);
		 printf("       AAAAAA AAAAAA      RRRRRR      RRRRRRR  CCCCCC                   AAAAAA AAAAAAA     DDDDDD        DDDDDD  EEEEE            \n");
         delay_2(300);
		 printf("       AAAAAA  AAAAAA     RRRRRRRRRRRRRRRRRRR  CCCCCC                   AAAAAA  AAAAAA     DDDDDD        DDDDDD  EEEEEEEEEEEEEEEE \n");
         delay_2(300);
		 printf("      AAAAAA   AAAAAA     RRRRRRRRRRRRRRRRRR   CCCCCC                  AAAAAAA  AAAAAA     DDDDDD        DDDDDD  EEEEEEEEEEEEEEEE \n");
         delay_2(300);
		 printf("      AAAAAA   AAAAAAA    RRRRRRRRRRRRRRRRR    CCCCCC                  AAAAAA   AAAAAAA    DDDDDD        DDDDDD  EEEEEEEEEEEEEEEE \n");
         delay_2(300);
		 printf("      AAAAAA    AAAAAA    RRRRRRRRRRRRRRR      CCCCCC                  AAAAAA    AAAAAA    DDDDDD        DDDDDD  EEEEEEEEEEEEEEEE \n");
         delay_2(300);
		 printf("     AAAAAAAAAAAAAAAAA    RRRRRR.RRRRRRRRR     CCCCCC        CCCCCC   AAAAAAAAAAAAAAAAA    DDDDDD        DDDDDD  EEEEE            \n");
         delay_2(300);
		 printf("     AAAAAAAAAAAAAAAAAA   RRRRRR   RRRRRRR     CCCCCCC       CCCCCC   AAAAAAAAAAAAAAAAAA   DDDDDD       DDDDDDD  EEEEE            \n");
         delay_2(300);
		 printf("     AAAAAAAAAAAAAAAAAA   RRRRRR    RRRRRRR    CCCCCCC      CCCCCCC   AAAAAAAAAAAAAAAAAA   DDDDDD       DDDDDDD  EEEEE            \n");
         delay_2(300);
		 printf("    AAAAAAAAAAAAAAAAAAA   RRRRRR    RRRRRRRR    CCCCCCC     CCCCCCC  AAAAAAAAAAAAAAAAAAA   DDDDDD      DDDDDDD   EEEEE            \n");
         delay_2(300);
		 printf("    AAAAAA       AAAAAAA  RRRRRR     RRRRRRR    CCCCCCCCC CCCCCCCC   AAAAA       AAAAAAAA  DDDDDD    DDDDDDDDD   EEEEE            \n");
         delay_2(300);
		 printf("   AAAAAA         AAAAAA  RRRRRR      RRRRRRR    CCCCCCCCCCCCCCCCC  AAAAAA         AAAAAA  DDDDDDDDDDDDDDDDDD    EEEEEEEEEEEEEEEEE\n");
         delay_2(300);
		 printf("   AAAAAA         AAAAAA  RRRRRR      RRRRRRRR    CCCCCCCCCCCCCCC   AAAAAA         AAAAAA  DDDDDDDDDDDDDDDDDD    EEEEEEEEEEEEEEEEE\n");
         delay_2(300);
		 printf("   AAAAAA         AAAAAAA RRRRRR       RRRRRRR     CCCCCCCCCCCCC    AAAAAA         AAAAAAA DDDDDDDDDDDDDDDDD     EEEEEEEEEEEEEEEEE\n");
         delay_2(300);
		 printf("   AAAAA           AAAAAA RRRRRR        RRRRRRR     CCCCCCCCCC     AAAAAA           AAAAAA DDDDDDDDDDDDDDD       EEEEEEEEEEEEEEEEE\n");
		 delay(2);
		
		 



	
		printf("\n\n Alunos:\n-Edgar 'ZEDSH1' Klewelt\n-Hugo 'Hzmonteiro' Monteiro\n-Igor 'Radicrow' Acatauassu\n\n");


	

        x++;

        if (x > 10) {
            x = 0;
        }

        Sleep(50);

        frame++;
        delay(7);
         printf("Carregando jogo...");
		 delay(2);
		menu();
		break;
    }
}

int game_1(void){
	system("cls||clear");
	int choice_1 = 0;
	do{
	int sn, sn2, q1, q2, q3, q4, q5;
	printf("\nPERGUNTA E RESPOSTA\n\nSerao feitas 5 perguntas com 4 alternativas cada.\nSua pontuacao sera exibida no final\n\n"); 
		printf("Voce gostaria de comecar?\n\n1 - Sim   2 - Nao\n\nInsira o valor da sua escolha: ");
		scanf("%d", &sn);
		if(sn == 1)
		{
		int score = 0;
		system("cls || clear");
		printf("\n\nQual tipo sanguineo eh considerado doador universal?\n\n1 - O Positivo   2 - O Negativo   3 - B Negativo   4 - AB Positivo\n\nInsira o valor equivalente a resposta correta: ");
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
		printf("\n\nQual eh o pais mais populoso do mundo?\n\n1 - China   2 - Venezuela   3 - India   4 - Estados Unidos\n\nInsira o valor equivalente a resposta correta: ");
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
		printf("\n\nQuantos satelites naturais conhecidos o planeta Netuno possui?\n\n1 - 18   2 - 9   3 - 14   4 - 23\n\nInsira o valor equivalente a resposta correta: ");
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
		printf("\n\nQual dos paises abaixo nao fala portugues?\n\n1 - Angola   2 - Mexico   3 - Brasil   4 - Portugal\n\nInsira o valor equivalente a resposta correta: ");
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
		printf("\n\nComo se chama o medo de flores?\n\n1 - Plantaephobia   2 - Flosphobia   3 - Floraphobia   4 - Antophobia\n\nInsira o valor equivalente a resposta correta: ");
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
	printf("Deseja jogar novamente? (1: Sim/2:Nao): ");
	scanf("%i", &choice_1);
	if (choice_1 == 1){
		game_1();
		return 0;
	}	
	else if (choice_1 == 2){
		printf("Retornando ao menu");
		delay(2);
		system("cls || clear");
		break;
		menu();
		return 0;
	}
	else{
		printf("Por favor escolha um valor valido\n");
		delay(2);
		game_1();
		return 0;
	}
}
else if (sn == 2){
			system("cls || clear");
			printf("Deseja retornar ao menu?(1:Sim   2: Nao)");
			int mn;
			scanf("%i", &mn);
			if (mn == 1){
				printf("Retornando ao menu...");
				delay(2);
				break;
				menu();
			}
			else{ game_1();
			}
		}
		else{
			printf("Por favor insira um valor valido");
			delay(2);
			system("cls||clear");
			game_1();
		}
	} while (choice_1 !=0);
}

void game_2(){
	system("cls || clear");
	int sn;
	int choice_2 = 0;
	
	do{
	srand(time(NULL));
    
    int botao = rand() % 5 + 1;
    int cobra = rand() % 5 + 1;
    
    while (cobra == botao) {
	cobra = rand() % 5 + 1;
    }
    
    char nome_jogador1[20], nome_jogador2[20];
    
    printf("Bem-vindos ao jogo Cobra Na Caixa!\n");
    printf("\nVoce gostaria de comecar?\n\n1 - Sim   2 - Nao\n\nInsira o valor da sua escolha: ");
	scanf("%d", &sn);
	if(sn == 1){
	system("cls||clear");
    
    printf("Jogador 1, coloque seu nome: ");
    scanf("%s", nome_jogador1);
    printf("Jogador 2, coloque seu nome: ");
    scanf("%s", nome_jogador2);
    
    int caixa_jogador1, caixa_jogador2;
    int turno = rand() % 2 + 1;
    int num1, num2, num3, num4, num5;
    

	const char* caixas[5] = {"*****\n *1*\n*****\n", "*****\n *2*\n*****\n", "*****\n *3*\n*****\n", "*****\n *4*\n*****\n","*****\n *5*\n*****\n"};
	const char* caixa_vazia[1] ={"      \n*   *\n*****\n"};
	do {
  
    
   
    	printf("%s%s%s%s%s\n", caixas[0],caixas[1],caixas[2],caixas[3],caixas[4]);

		if(turno == 1){
			printf("\n\n%s, seu turno!. \nEscolha sua caixa!", nome_jogador1);
			 scanf("%d", &caixa_jogador1);
			 if(caixa_jogador1 == cobra){
			 	printf("A caixa %i tinha uma cobra escondida! Voce perdeu, %s!\n", cobra, nome_jogador1);
			 	delay(4);
			 	break;
			 }
			 else if (caixa_jogador1 == botao){
				printf("O botao estava na caixa %i! Voce ganhou, %s!\n", botao, nome_jogador1);
		 		delay(4);
				break;
			 }	
			else {
			printf("Essa caixa estava vazia.");
			delay(2);
		}
		}
       

       if(turno == 2){
			printf("\n%s, seu turno!. \nEscolha sua caixa!", nome_jogador2);
			 scanf("%d", &caixa_jogador2);
			if(caixa_jogador2 == cobra){
				printf("A caixa %i tinha uma cobra escondida! Voce perdeu, %s!\n", cobra, nome_jogador2);
				delay(4);
				break;
		}
		 else if (caixa_jogador1 == botao){
				printf("O botao estava na caixa %i! Voce ganhou, %s!\n", botao, nome_jogador1);
		 		delay(4);
				break;
			 }
		else {
			printf("Essa caixa estava vazia.");
			delay(2);
		}
	}
		if (caixa_jogador1 == 1|| caixa_jogador2 == 1){
		caixas[0] == caixa_vazia[1];
	}
		if (caixa_jogador1 == 2|| caixa_jogador2 == 2){
		caixas[1] == caixa_vazia[1];
	}
	
		if (caixa_jogador1 == 3|| caixa_jogador2 == 2){
		caixas[2] == caixa_vazia[1];
	}
	
		if (caixa_jogador1 == 4|| caixa_jogador2 == 4){
		caixas[3] == caixa_vazia[1];
	}
	
		if (caixa_jogador1 == 5|| caixa_jogador2 == 5){
		caixas[4] == caixa_vazia[1];
	}
	
        system("cls||clear");
    	turno = turno == 1 ? 2 : 1;
    } while (1);


	printf("Deseja jogar novamente? (1: Sim/2:Nao): ");
	scanf("%i", &choice_2);
	if (choice_2 == 1){
		game_2();
	}	
	else if (choice_2 == 2){
		printf("Retornando ao menu...");
		delay(2);
		system("cls || clear");
		break;
		menu();
	}
}
else if (sn == 2){
		system("cls||clear");
		int mn;
		printf("Voce deseja retornar ao menu? (1:Sim, 2:Nao)");
		scanf("%i", &mn);
		if (mn == 1){
			printf("Retornando ao menu...");
			delay(2);
			menu();
			break;
		}
	
}
}
while (choice_2 !=0);
}

void game_3(){
	int choice_3 = 0;
	int sn;
	do{
	system("cls || clear");
	printf("Gousmas War\n");
	printf("Nas distantes terras de Liima, eh comum as pessoas capturarem Gousmas para lutar. \nUse seu intelecto para derrotar seu oponente em um combate!\n\n");
	printf("REGRAS:\nDurante a luta, cada participante comeca com duas Gousmas em campo e com o nivel de furia igual a 1.\nAo escolher uma Gousma para atacar, todo o nivel de furia do atacante e transferido para a Gousma atacada.\nQuando a Gousma atacada alcan?a um nivel de furia maior que 5, ela eh desintegrada.\n");
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
	
	printf("Deseja jogar novamente? (1: Sim/2:Nao): ");
	scanf("%i", &choice_3);
	if (choice_3 == 1){
		system("cls||Clear");
		game_3();
	}	
	else if (choice_3 == 2){
		printf("Retornando ao menu...");
		delay(2);
		system("cls || clear");
		break;
		menu();
	}
	else{
		printf("Por favor escolha um valor valido");
		choice_3 = 0;
	}
}
else if (sn == 2){
		system("cls||clear");
		int mn;
		printf("Voce deseja retornar ao menu? (1:Sim, 2:Nao)");
		scanf("%i", &mn);
		if (mn == 1){
			printf("Retornando ao menu...");
			delay(2);
			break;
			menu();
		}
	}
}
	while (choice_3 !=0);
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
	if (escolha == 4){
		printf("Saindo do aplicativo...");
		break;
	}
}
	while(escolha !=0);
}

int main(void){
	intro();

}
