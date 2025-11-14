// 17. Delete a value from the last position.
#include <stdio.h>
int main()
{
    int arr[10], n, i;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    n--; // just reduce count

    printf("Array after deleting last element:\n");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    return 0;
}
