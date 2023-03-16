#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    int p1_left = 1, p1_right = 1, p2_left = 1, p2_right = 1;
    int turno, atacante, alvo, raiva;

    srand(time(NULL));

    // Decide quem vai primeiro
    turno = rand() % 2 + 1;

    printf("Bem vindo ao Gousma Wars!\n");
    printf("Treinador 1 ((1)Gousma 1: %d, (2)Gousma 2: %d)\n", p1_left, p1_right);
    printf("Treinador 2 ((3)Gousma 1: %d, (4)Gousma 2: %d)\n", p2_left, p2_right);
    
    

    do {
        printf("\nTurno do treinador %d. \n", turno);
        printf("Insira o atacante: ");
        scanf("%i", &atacante);
        printf("Insira o alvo: ");
        scanf("%i", &alvo);


        if (atacante == 1) {
            raiva = p1_left;
        } else if (atacante == 2) {
            raiva = p1_right;
        } else if (atacante == 3) {
            raiva = p2_left;
        } else if (atacante == 4) {
            raiva = p2_right;
        } else {
            printf("Movimento invalido. Tente novamente");
            continue;
        }

        if (alvo == 1) {
            p1_left += raiva;
        } else if (alvo == 2) {
            p1_right += raiva;
        } else if (alvo == 3) {
            p2_left += raiva;
        } else if (alvo == 4) {
            p2_right += raiva;
        } else {
            printf("Movimento invalido. Tente novamente");
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
            printf("Player 2 wins!\n");
            break;
        }
        if (p2_left ==0 && p2_right == 0) {
            printf("Player 1 wins!\n");
            break;

        }

    	system("cls||clear");
    	turno = turno == 1 ? 2 : 1;
        printf("Treinador 1 ((1)Gousma 1: %d, (2)Gousma 2: %d)\n", p1_left, p1_right);
        printf("Treinador 2 ((3)Gousma 1: %d, (4)Gousma 2: %d)\n", p2_left, p2_right);
    } while (1);

    return 0;
}

