#include <stdio.h>

int main() {
    int arr[50],i,j,n,temp;
    printf("Enter the total no.of elements:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("Sorted array is:");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}