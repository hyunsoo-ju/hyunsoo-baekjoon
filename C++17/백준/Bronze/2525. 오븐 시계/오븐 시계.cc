#include <stdio.h>

int main() {

    int h, m, i, time;

    scanf("%d %d", &h, &m);
    scanf("%d", &i);

    time = 60 * h + m + 1440;

    time = time + i;

    h = (time / 60) % 24;
    m = time % 60;

    printf("%d %d", h, m);

    return 0;

}