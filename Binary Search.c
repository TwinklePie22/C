#include <stdio.h>
int binarySearch(int arr[], int l, int r, int x)
{

    if (r >= l)
 {
    int mid = l + (r - l) / 2;

    if (arr[mid] == x)
        return mid;
    if (arr[mid] > x)
        return binarySearch(arr, l, mid - 1, x);

    return binarySearch(arr, mid + 1, r, x);
}
return -1;
}
 int main()
{
    int arr[5],i , x;
    printf("Enter the elements of the array: \n");
    for (i=0; i<5; i++)
        {
            scanf("%d", &arr[i]);
        }
    printf("The array is: \n");
    for (i=0; i<5; i++)
        {
            printf("%d\n", arr[i]);
        }
    printf("\n");
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Enter the element to be searched: ");
    scanf("%d", &x);
    int result = binarySearch(arr, 0, n - 1, x);
    if (result == -1)
        printf("Element is not present in array");
    printf("Element is present at index %d", result);
    return 0;
}
