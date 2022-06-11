#include<stdio.h>

int main() {
    puts("Enter a number");
    int n;
    scanf("%d", &n);
    while (n > 0) {
        printf("The new number is %d\n", n);
        n /= 10;
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (j >= i) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    /*
    int a, b;
    printf("Enter two numbers\n");
    scanf("%d,%d", &a, &b);
    printf("The sum of %d and %d is %d\n", a, b, a+b);
    */
    /*
    puts("Enter a number");
    int n;
    scanf("%d", &n);

    printf("Hello world\n\
           The number you entered was %d\n", n);
    */
    return 0;
}
