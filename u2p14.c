// 14. Insert a new number at the last position within an array.
#include <stdio.h>
int main()
{
    int arr[10], n, val, i;
    printf("Enter number of elements (max 9): ");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    printf("Enter value to insert at last: ");
    scanf("%d",&val);

    arr[n]=val;
    n++;

    printf("Array after insertion:\n");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    return 0;
}
