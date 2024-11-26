#include <stdio.h>
int main() {
    int number; 
    int sochan ; 
    int sole; 
    printf("Nhap vao 5 so nguyen:\n");
    for (int i = 0; i < 5; i++) {
        printf("So thu %d: ", i + 1);
        scanf("%d", &number);
        if (number % 2 == 0) { 
            sochan++; 
        } else {
            sole++; 
        }
    }
    printf("So luong so chan: %d\n", sochan);
    printf("So luong so le: %d\n", sole);
    return 0;
}
