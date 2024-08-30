#include <stdio.h>

unsigned int fact(unsigned int n) 
{
    if (n == 0 || n == 1)
        return 1;
    else
        return (n * fact(n - 1));
}

int main()
{
    unsigned int num;
    
    printf("Enter a non-negative integer: ");
    scanf("%u", &num);

    unsigned int result = fact(num);
    printf("Factorial of %u is %u\n", num, result);

    return 0;
}
