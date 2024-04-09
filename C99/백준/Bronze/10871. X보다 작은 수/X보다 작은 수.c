#include <stdio.h>

int main() {

    int n, x, i;
    scanf("%d %d", &n, &x);

    int a[10000];

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int count = 0;

    for (i = 0; i < n; i++) {
        if (a[i] < x) {
            printf("%d ", a[i]);
        }
    }

    return 0;

}