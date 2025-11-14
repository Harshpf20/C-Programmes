// 12. Insert a new number at the beginning of the array.
#include <stdio.h>
int main()
{
    int arr[10], n, i, val;
    printf("Enter number of elements (max 9): ");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    printf("Enter new value to insert at beginning: ");
    scanf("%d",&val);

    for(i=n;i>0;i--)
        arr[i]=arr[i-1];
    arr[0]=val;
    n++;

    printf("Array after insertion:\n");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    return 0;
}
