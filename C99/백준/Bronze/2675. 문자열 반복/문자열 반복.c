#include <stdio.h>
#include <string.h>

int main(void) {
    int T, i;
    scanf("%d", &T);
    for (i = 0; i < T; i++) {
        int R, j;
        char S[20];
        scanf("%d %s", &R, &S);
        for (j = 0; j < strlen(S); j++) {
            int k;
            for (k = 0; k < R; k++) {
                printf("%c", S[j]);
            }
        }
        printf("\n");
    }
    return 0;
}