#include <stdio.h>

int stringLength(char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char str[] = "HelloWorld!";
    
    int length = stringLength(str);
    printf("Length of String: %d\n", length);
    
    return 0;
}

