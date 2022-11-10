#include <stdio.h>

void jolly(void);
void deny(void);

int main(void)
{
    for (char i = 0; i < 3; i++) {
        jolly();
    }

    deny();

    return 0;
}

void jolly(void)
{
    printf("He's funny!\n");
}

void deny(void)
{
    printf("Nobody can't deny this!\n");
}
