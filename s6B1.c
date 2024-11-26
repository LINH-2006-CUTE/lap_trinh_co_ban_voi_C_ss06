#include <stdio.h>
int main() {
    int number; 
    int sum = 0; 
    printf("Nhap vao 5 so nguyen:\n");
    for (int i = 0; i < 5; i++) {
        printf("So thu %d: ", i + 1);
        scanf("%d", &number);
        if (number % 2 != 0) { 
            sum += number;
        }
    }
    printf("Tong cac so le trong 5 so la: %d\n", sum);
    return 0;
}
