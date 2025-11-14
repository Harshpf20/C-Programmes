// 2. Accept one line at a time from the user and write it into a file (use fgets + fputs)
// Enter a single line containing only a single period '.' to stop.
// Output file used: output.txt (append mode)

#include <stdio.h>
#include <string.h>

int main()
{
    char line[1024];
    FILE *fp;

    fp = fopen("output.txt", "a"); // append to file
    if(!fp) {
        perror("Unable to open file for writing");
        return 1;
    }

    printf("Enter lines to write to output.txt (single line containing just '.' to stop):\n");

    /* consume leftover newline before first fgets if any */
    getchar();

    while(1) {
        if(fgets(line, sizeof(line), stdin) == NULL) break; // EOF

        /* remove possible trailing newline for comparison, but we'll write newline back */
        if(strcmp(line, ".\n") == 0 || strcmp(line, ".") == 0) {
            printf("Stopping input.\n");
            break;
        }

        /* write the line to file using fputs (keeps newline present) */
        fputs(line, fp);
    }

    fclose(fp);
    printf("Lines appended to output.txt\n");
    return 0;
}
