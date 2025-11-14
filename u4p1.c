// 1. Read a file and count number of lines, words, characters and spaces
// Usage: change FNAME to the filename you want to analyze, or type filename at prompt.

#include <stdio.h>
#include <ctype.h>

int main()
{
    char fname[100];
    FILE *fp;
    int c;
    long chars = 0, spaces = 0, lines = 0, words = 0;
    int in_word = 0;

    printf("Enter filename to analyze: ");
    scanf("%99s", fname);

    fp = fopen(fname, "r");
    if(!fp) {
        perror("Unable to open file");
        return 1;
    }

    while((c = fgetc(fp)) != EOF) {
        chars++;

        if(c == '\n')
            lines++;

        if(isspace(c)) {
            if(c == ' ')
                spaces++;
            in_word = 0;
        } else {
            if(!in_word) {
                words++;
                in_word = 1;
            }
        }
    }

    /* If file not ending with newline still counted lines as number of '\n' */
    if(chars > 0 && lines == 0) lines = 1; // single-line file

    printf("\nFile: %s\n", fname);
    printf("Characters (including spaces & newlines): %ld\n", chars);
    printf("Spaces: %ld\n", spaces);
    printf("Words: %ld\n", words);
    printf("Lines: %ld\n", lines);

    fclose(fp);
    return 0;
}
