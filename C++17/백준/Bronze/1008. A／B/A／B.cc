#include <stdio.h>

int main() {
    
    double n1;
    double n2;

    scanf("%lf %lf", &n1, &n2);
    
    printf("%.10lf\n", n1 / n2);

    return 0;
}