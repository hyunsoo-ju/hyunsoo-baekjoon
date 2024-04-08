#include <stdio.h>

int main() {

    int a, b, c, prize;
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c) {
        prize = 10000 + 1000 * a;
    }
    else if ((a == b && b != c) || (b == c && c != a) || (a == c && c != b)) {
        prize = ( (a == b && b != c) || (b == c && c != a) ? 1000 + 100 * b : 1000 + 100 * c);
    }
    else if ( a > b && a > c ) { prize = 100 * a;}
    else if ( b > a && b > c ) { prize = 100 * b;}
    else {prize = 100 * c;}

    printf("%d", prize);
    
    return 0;

}