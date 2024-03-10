#include <stdio.h>

int main() {
    int n1, n2, a, b, c;
    scanf("%d", &n1);
    scanf("%d", &n2);
    c = n2 / 100;
    b = (n2 - c * 100) / 10;
    a = n2 - b * 10 - c * 100;
    printf("%d\n%d\n%d\n%d\n", n1 * a, n1 * b, n1 * c, n1 * n2);
}