#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void interpretare(int x, int y)
{
        if(x + y == 12) {
            printf("Dau cu zaru 6 6 ca mine inu se mai naste\n");
        } else if (x + y == 11) {
            printf("Dau cu zaru 6 5 n-am nevoie de servici\n");
        } else {
             printf("Dau cu zaru %d %d\n", x, y);
        }

}

int main()
{   int x, y;
    srand((unsigned)time(NULL));//am setat valoarea de seed, functia rand produce numere 'pseudo-aleatoare'
    x = 1 + rand() % 6; //modulo 6 ne da valori de la 0 la 5 si plus 1, fetele zarului au valori de la 1 la 6
    y = 1 + rand() % 6;
    interpretare(x, y);
    return 0;
}
