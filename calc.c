// C program to read two integer numbers and find their sum, difference, product and quotient using separate function.

#include <stdio.h>

int sum(int a, int b) 
{
    int result = a + b;
    
    return result;
}

int difference(int a, int b) 
{
    int result = a - b;
    
    return result;
}

int product(int a, int b) 
{
    int result = a * b;
    
    return result;
}

float quotient(int a, int b) 
{
    float result = a / (float)b;
    
    return result;
}

int main()
{
    int a, b;
    float(res);
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    
    res = sum(a, b);
    printf("\n%d+%d=%g", a, b, res);
    
    res = difference(a, b);
    printf("\n%d-%d=%g", a, b, res);
    
    res = product(a, b);
    printf("\n%d*%d=%g", a, b, res);
    
    res = quotient(a, b);
    printf("\n%d/%d=%g", a, b, res);
    
    return 0;
}
