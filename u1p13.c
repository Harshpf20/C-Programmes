//  Program to convert bytes into KB, MB, and GB
#include <stdio.h>
int main()
{
    float bytes;
    printf("Enter size in bytes: ");
    scanf("%f", &bytes);
    printf("%.2f Bytes = %.2f KB\n", bytes, bytes / 1024);
    printf("%.2f Bytes = %.2f MB\n", bytes, bytes / (1024 * 1024));
    printf("%.2f Bytes = %.2f GB\n", bytes, bytes / (1024 * 1024 * 1024));
    return 0;
}
