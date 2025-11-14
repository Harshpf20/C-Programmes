// 18. Delete a value from the array (by value, not position).
#include <stdio.h>
int main()
{
    int arr[10], n, val, i, j, found=0;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    printf("Enter value to delete: ");
    scanf("%d",&val);

    for(i=0;i<n;i++){
        if(arr[i]==val){
            for(j=i;j<n-1;j++)
                arr[j]=arr[j+1];
            n--;
            found=1;
            break;
        }
    }

    if(found==0)
        printf("Value not found in array.\n");
    else{
        printf("Array after deletion:\n");
        for(i=0;i<n;i++)
            printf("%d ",arr[i]);
    }
    return 0;
}
