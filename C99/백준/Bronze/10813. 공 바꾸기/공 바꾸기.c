#include <stdio.h>

int main() {

    int n, m;
    int balls[100] = {0};
    scanf("%d %d", &n, &m);

    int i;

    for (i = 0; i < n; i++) {
        balls[i] = i + 1;
    }

    for (i = 0; i < m; i++) {
        int a, b, stor;
        scanf("%d %d", &a, &b);
        a--; b--;
        stor = balls[b];
        balls[b] = balls[a];
        balls[a] = stor;
    }

    for (i = 0; i < n; i++) {
        printf("%d ", balls[i]);
    }
    
    return 0;

}