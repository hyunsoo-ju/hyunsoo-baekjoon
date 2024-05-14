#include <stdio.h>
#include <ctype.h>

int main(void) {
    int wordCount = 0;
    char c;
    int inSeparator = 1;

    while ((c = getchar()) != '\n') {
        if (isalpha(c)) {
            wordCount += inSeparator;
            inSeparator = 0;
        } else {
            inSeparator = 1;
        }
    }
    printf("%d\n", wordCount);
}