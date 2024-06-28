#include <stdio.h>
#include <string.h>

void copyString(char *source, char *destination) {
    strcpy(destination, source);
}

int main() {
    char original[] = "Hello, World!";
    char copied[50];
    
    copyString(original, copied);
    
    printf("Original String: %s\n", original);
    printf("Copied String: %s\n", copied);
    
    return 0;
}

