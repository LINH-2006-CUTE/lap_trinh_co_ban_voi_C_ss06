#include <stdio.h>
int main() {
    int n, i;
    printf("Nhp 1 so nguyen : ");
    scanf("%d", &n);
    printf("Uoc  cua  %d la: ", n);
    for (i = 1; i <= n && n != 0 ; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
