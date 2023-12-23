#include <stdio.h>

int main()
{
    int fahr;
    int celsius;
    int step = 20;
    int lower = 0;
    int upper = 300;
    fahr = lower;
    while (fahr <= upper)
    {
        celsius = 5 * (fahr - 32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr += step;
    }
}