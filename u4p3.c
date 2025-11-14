// 3. Read content of a file line by line (use fgets)
// Usage: enter filename when prompted. The program prints each line with its line number.

#include <stdio.h>

int main()
{
    char fname[100];
    char buffer[1024];
    FILE *fp;
    int lineno = 0;

    printf("Enter filename to read line by line: ");
    scanf("%99s", fname);

    fp = fopen(fname, "r");
    if(!fp) {
        perror("Unable to open file");
        return 1;
    }

    while(fgets(buffer, sizeof(buffer), fp) != NULL) {
        lineno++;
        printf("%4d: %s", lineno, buffer); // buffer already has newline
    }

    if(lineno == 0)
        printf("(file is empty)\n");

    fclose(fp);
    return 0;
}
