#include <stdio.h>
int binarySearch(int a[], int low, int high, int item)
{

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (a[mid] == item)
        {
            return mid;
        }

        if (a[mid] < item)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}
int main(void)
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    int x;
    printf("Enter Searching ITEM: ");
    scanf("%d", &x);
    int result = binarySearch(arr, 0, n - 1, x);
    if (result == -1)
        printf("Element is not present in array.");
    else
        printf("Element is present at index %d", result+1);
}