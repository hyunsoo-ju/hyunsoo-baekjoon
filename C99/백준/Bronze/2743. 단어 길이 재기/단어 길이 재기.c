#include <stdio.h>
#include <string.h>

int main(void) {
    char str[100];
    scanf("%s", &str);
    int len = strlen(str);
    printf("%d", len);
    return 0;
}