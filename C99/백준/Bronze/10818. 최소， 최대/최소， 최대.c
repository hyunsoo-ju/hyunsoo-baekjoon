#include <stdio.h>

int main() {

    int n, i;
    int a[1000000];
    
    scanf("%d", &n);
    
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int min = a[0];
    int max = a[0];
    
    for (i = 0; i < n; i++) {
        if (a[i] < min) {
            min = a[i];
        }
        if (a[i] > max) {
            max = a[i];
        }
    }

    printf("%d %d\n", min, max);

    return 0;

}