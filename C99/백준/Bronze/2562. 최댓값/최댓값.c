#include <stdio.h>

int main() {

    int a[9];
    int i;

    for (i = 0; i < 9; i++) {
        scanf("%d", &a[i]);
    }

    int max = a[0];
    int p;

    for (i = 0; i < 9; i++) {
        if (max <= a[i]) {
            max = a[i];
            p = i + 1;
        }
    }

    printf("%d\n%d", max, p);
    
}