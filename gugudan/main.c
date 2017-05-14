#include <stdio.h>
void printGugudan(void)
{
    int dan;
    int multiplier;
    int value;
    for(dan = 2; dan<=9; dan++) {
        for(multiplier = 1; multiplier<=9; multiplier++) {
            value = dan * multiplier;
            printf("%d * %d = %02d\n", dan, multiplier, value);
        }
        printf("\n");
    }
}
int main()
{
    printGugudan();

    return 0;
}
