#include <stdio.h>

void smile(void);

int main(void)
{
    for (char i = 3; i > 0; i--) {
        for (char j = i; j > 0; j--) {
            smile();
        }
        printf("\n");
    }

    return 0;
}

void smile(void)
{
    printf("Smile!");
}
