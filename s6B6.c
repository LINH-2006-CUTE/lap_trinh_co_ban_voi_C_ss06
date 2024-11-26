#include <stdio.h>

int main() {
    int i;
    for (i = 1; i <= 100; i++) {
        if (i % 3 == 0) {
            printf("Fizz");
            continue; 
        }
        if (i % 5 == 0) {
            printf("Buzz");
            continue;
        }
        if (i % 3 == 0 && i % 5 == 0) {
            printf("FizzBuzz");
            continue; 
        }
        printf("%d\n", i); 
    }
    return 0;
}
