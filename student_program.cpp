#include <stdio.h>
#include <string.h>

void reverse(char str1[], char str2[]);

int main() {
    char text[50] = "Hello World";
    char out[50];
    reverse(text, out);
    printf("Output: %s\n", out);
    return 0;
}

void reverse(char str1[], char str2[]) {
    int length = strlen(str1);
    for (int i = 0; i < length; i++) {
        str2[i] = str1[length - i - 1];
    }
    str2[length] = '\0';
}
