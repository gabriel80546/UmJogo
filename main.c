#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int nos, pc;

    srand(time(NULL));

    pc = rand() % 20 + 1;

    nos = -3;
    while(nos != pc) {
        printf("qual é o número? R: ");
        scanf("%d", &nos);
    }
    printf("acertou!\n");
    return 0;
}
