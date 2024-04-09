#include <stdio.h>

int main() {

    int n, i;
    scanf("%d", &n);

    for (i = 1; i <= (n + 3) / 4; i++) {
        printf("long ");
    }

    printf("int\n");

    return 0;
}