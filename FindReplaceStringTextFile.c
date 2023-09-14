#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void findAndReplaceInFile(const char *filename, const char *find, const char *replace) {
    FILE *file = fopen(filename, "r+");
    if (file == NULL) {
        perror("Unable to open file");
        exit(1);
    }

    // Determine the file size
    fseek(file, 0, SEEK_END);
    long fileSize = ftell(file);
    rewind(file);

    // Read the entire file into memory
    char *fileContents = (char *)malloc(fileSize + 1);
    fread(fileContents, 1, fileSize, file);
    fileContents[fileSize] = '\0';

    // Find and replace operation
    char *occurrence;
    int findLen = strlen(find);
    int replaceLen = strlen(replace);

    while ((occurrence = strstr(fileContents, find)) != NULL) {
        int position = occurrence - fileContents;
        memmove(occurrence + replaceLen, occurrence + findLen, fileSize - position - findLen + 1);
        memcpy(occurrence, replace, replaceLen);
        fileSize -= findLen - replaceLen;
    }

    // Rewrite the modified text back to the file
    rewind(file);
    fwrite(fileContents, 1, fileSize, file);
    fclose(file);

    free(fileContents);
}

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Usage: %s <filename> <find> <replace>\n", argv[0]);
        return 1;
    }

    const char *filename = argv[1];
    const char *find = argv[2];
    const char *replace = argv[3];

    findAndReplaceInFile(filename, find, replace);
    printf("Replacement complete.\n");

    return 0;
}
