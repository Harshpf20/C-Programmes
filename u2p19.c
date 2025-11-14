// 19. Search a value within an array.
#include <stdio.h>
int main()
{
    int arr[10], n, val, i, found=0;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    printf("Enter value to search: ");
    scanf("%d",&val);

    for(i=0;i<n;i++){
        if(arr[i]==val){
            printf("Value found at position %d.\n",i+1);
            found=1;
            break;
        }
    }

    if(found==0)
        printf("Value not found.\n");

    return 0;
}
