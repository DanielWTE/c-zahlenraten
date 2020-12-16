#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int random_num = 0;
    int guessed_num = 0;
    int counter = 0;
    srand(time(NULL));
    random_num = rand() % 1000 + 0;
    printf("Errate die Zahl Zwischen 0 und 1000!\n");
    printf(">>>");
    while(1)
    {
        counter++;
        scanf("%d", &guessed_num);
        if (guessed_num == random_num)
        {
            printf("Sie haben die Zahl in %d Versuchen erraten! Es war %d!\n", counter, random_num);
            break;
        }
        if (guessed_num < random_num)
        {
            printf("Die Zahl ist zu Klein, nochmal!\n");
            printf(">>>");
        }
        if (guessed_num > random_num)
        {
            printf("Die Zahl ist zu Gros, nochmal!\n");
            printf(">>>");
        }
    }
    return 0;
}
