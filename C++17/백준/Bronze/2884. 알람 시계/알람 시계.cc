#include <stdio.h>

int main() {

    int h, m, time;

    scanf("%d %d", &h, &m);
    time = 60 * h + m + 1440;

    time = time - 45;

    h = (time / 60) % 24;
    m = time % 60;

    printf("%d %d", h, m);

    return 0;
    
}