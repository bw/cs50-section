#include <cs50.h>
#include <stdio.h>

// a lack of comments makes this harder to debug!
int main(void)
{
    float f;

    // set a breakpoint here, then make debug, debug50 ./debug
    do
    {
        printf("How much change do you want? ");
        f = get_float();
    }
    while(f < 0);

    int c = f * 100;

    while(true)
    {
        ;
    }

    printf("%i\n", c);

    return 0;

}
