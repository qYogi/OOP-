#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

// conv str int
int conv(const char* str) {
    int result = 0;
    int i = 0;

    while (str[i] >= '0' && str[i] <= '9') {
        result = result * 10 + (str[i] - '0');
        i++;
    }

    return result;
}

int main() {
    FILE* file;
    char line[100];
    int sum = 0;

    // deschide
    if (fopen_s(&file, "in.txt", "r") != 0) {
        printf("Error opening file: %d\n", errno);
        return 1;
    }

    // citeste
    while (fgets(line, sizeof(line), file)) {
        sum += conv(line);
    }

    fclose(file);

    // Print the sum
    printf("Sum is: %d\n", sum);

    return 0;
}