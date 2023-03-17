#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main() {
    int frame = 0;
    int x = 0;

    while (frame < 60) { 
        system("cls"); 

        printf("[%*s]", x, "");

        x++;

        if (x > 10) {
            x = 0;
        }

        Sleep(50);

        frame++;
    }

    return 0;
}
