#include <stdio.h>
#include <string.h>

int main(void) {
    char str[100];
    int i;
    scanf("%s", &str);
    for (i = 0; i < 26; i++) {
        int j, loc = -1;
        for (j = 0; j < strlen(str); j++) {
            if (str[j] == i + 97) {
                loc = j;
                break;
            }
        }
        printf("%d ", loc);
    }
    printf("\n");
    return 0;
}