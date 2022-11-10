#include <stdio.h>

int main(void)
{
    char* name = "Name";
    char* second_name = "Family";

    printf("%s %s\n", name, second_name);
    printf("%s\n%s\n", name, second_name);
    printf("%s ", name);
    printf("%s\n", second_name);

    return 0;
}
