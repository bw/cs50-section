#include <cs50.h>
#include <stdio.h>

int main(void) {
    int a;
    int b;
    int c;
    
    a = 5;
    b = a + 2;
    c = a + b;
    a = b - c;

    do {
        printf("How much change do you want? ");
        f = get_float();
    } while (f < 0);

    int c = f * 100;

    while (true) {
        ;
    }

    printf("%i\n", c);

    return 0;
}
