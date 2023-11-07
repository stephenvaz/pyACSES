#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *file = fopen("test.txt", "r");
    if (file == NULL) {
        perror("Error opening the file");
        return 1;
    }

    int word_count = 0;
    char word[100];

    while (fscanf(file, "%s", word) != EOF) {
        word_count++;
    }

    fclose(file);

    printf("Word count: %d\n", word_count);

    return 0;
}
