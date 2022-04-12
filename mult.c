#include <stdio.h>

int main()
{
    int x, y;
    int p;
    printf("Enter x, y: ");
    scanf("%d %d", &x, &y);
    p = x*y;
    printf("%d*%d=%d", x, y, p);

    return 0;
}
