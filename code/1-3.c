#include <stdio.h>

void my_strcat(char *dst, const char *src) {
  char *p = dst;
    while (*p != '\0') p++;
    while (*src != '\0') {
        *p = *src;
        p++; src++;
    }
    *p = '\0'; 
    return dst;
}

int main() {
    char str1[20] = "Hello ";
    char str2[] = "World";

    printf("%s\n", str1);
    my_strcat(str1, str2);
    printf("%s\n", str1);

    return 0;
}
