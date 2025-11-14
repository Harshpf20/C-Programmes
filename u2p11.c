// 11. Shift all numbers by given n positions within an array of 10 elements either left or right side.
// Pad the remaining positions with 0.
#include <stdio.h>
int main()
{
    int arr[10], shifted[10], n, i, dir;
    printf("Enter 10 elements:\n");
    for(i=0;i<10;i++)
        scanf("%d",&arr[i]);

    printf("Enter number of positions to shift: ");
    scanf("%d",&n);
    printf("Enter 1 for left shift or 2 for right shift: ");
    scanf("%d",&dir);

    for(i=0;i<10;i++)
        shifted[i]=0;

    if(dir==1){ // left shift
        for(i=0;i<10-n;i++)
            shifted[i]=arr[i+n];
    }
    else if(dir==2){ // right shift
        for(i=n;i<10;i++)
            shifted[i]=arr[i-n];
    }

    printf("Array after shifting:\n");
    for(i=0;i<10;i++)
        printf("%d ",shifted[i]);
    return 0;
}
