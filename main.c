#include "main.h"

/*int main(void)
{
    int ret;
    int pret;

    ret = _printf("# Octal: %#o\n", 42);
    printf("Expected output: # Octal: 052\n");
    printf("Actual output:   ");
    pret = printf("# Octal: %#o\n", 42);
    printf("\n");
    if (ret != pret) {
        printf("Error: expected return value of %d, got %d\n", pret, ret);
    }

    ret = _printf("# Hexadecimal: %#x\n", 0xabcdef);
    printf("Expected output: # Hexadecimal: 0xabcdef\n");
    printf("Actual output:   ");
    pret = printf("# Hexadecimal: %#x\n", 0xabcdef);
    printf("\n");
    if (ret != pret) {
        printf("Error: expected return value of %d, got %d\n", pret, ret);
    }

    ret = _printf("Positive: % d\n", 42);
    printf("Expected output: Positive:  42\n");
    printf("Actual output:   ");
    pret = printf("Positive: % d\n", 42);
    printf("\n");
    if (ret != pret) {
        printf("Error: expected return value of %d, got %d\n", pret, ret);
    }

    ret = _printf("Negative: % d\n", -42);
    printf("Expected output: Negative: -42\n");
    printf("Actual output:   ");
    pret = printf("Negative: % d\n", -42);
    printf("\n");
    if (ret != pret) {
        printf("Error: expected return value of %d, got %d\n", pret, ret);
    }

    ret = _printf("Positive: %+d\n", 42);
    printf("Expected output: Positive: +42\n");
    printf("Actual output:   ");
    pret = printf("Positive: %+d\n", 42);
    printf("\n");
    if (ret != pret) {
        printf("Error: expected return value of %d, got %d\n", pret, ret);
    }

    ret = _printf("Negative: %+d\n", -42);
    printf("Expected output: Negative: -42\n");
    printf("Actual output:   ");
    pret = printf("Negative: %+d\n", -42);
    printf("\n");
    if (ret != pret) {
        printf("Error: expected return value of %d, got %d\n", pret, ret);
    }

    return 0;
}*/

int main(void)
{
    int long_num = -150;
    printf("Test 3: %+++d\n", long_num);
    _printf("Test 3: %+++d\n", long_num);
    return 0;
}