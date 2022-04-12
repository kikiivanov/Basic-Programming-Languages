#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c, d;
    printf("Enter c and d: ");
    scanf("%d %d", &c, &d);

    // c = 5, d = 3
    c += d;    // c = 8, d = 3
    d = c - d; // c = 8, d = 5
    c -= d;    // c = 3, d = 5

    printf("c = %d, d = %d", c, d);

    return 0;
}
