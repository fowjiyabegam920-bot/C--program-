#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char filename[100], ch;
    int lines = 0, words = 0, chars = 0, inWord = 0;

    printf("Enter file name: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: Cannot open file %s\n", filename);
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        chars++;

        if (ch == '\n')
            lines++;

        if (isspace(ch)) {
            inWord = 0;
        } else if (!inWord) {
            inWord = 1;
            words++;
        }
    }

    fclose(fp);

    printf("\nFile: %s\n", filename);
    printf("Characters: %d\n", chars);
    printf("Words     : %d\n", words);
    printf("Lines     : %d\n", lines);

    return 0;
}