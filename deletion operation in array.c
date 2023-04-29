<<<<<<< HEAD
#include<stdio.h>
int main()
{
    int arr[50], size, i, position;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter the elements of the array: ");
    for(i=0;i<size;i++)
    {
        scanf("%d", &arr[i]);
    }

    // Now mentioned the position of the  element that you want to delete
    printf("Enter the position of the element that you want to delete: ");
    scanf("%d", &position);

    if(position < 1 || position > size)
    {
        printf("Invalid Position!\n");
    }
    // Shift element to left from position to be deleted
    for(i=position-1; i<size-1; i++)
    {
        arr[i] = arr[i+1];
    }
    size--;

    printf("Array after deletion:\n");
    for(i=0;i<size;i++)
    {
        printf("%d ", arr[i]);
    }





}
=======
#include<stdio.h>
int main()
{
    int arr[50], size, i, position;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter the elements of the array: ");
    for(i=0;i<size;i++)
    {
        scanf("%d", &arr[i]);
    }

    // Now mentioned the position of the  element that you want to delete
    printf("Enter the position of the element that you want to delete: ");
    scanf("%d", &position);

    if(position < 1 || position > size)
    {
        printf("Invalid Position!\n");
    }
    // Shift element to left from position to be deleted
    for(i=position-1; i<size-1; i++)
    {
        arr[i] = arr[i+1];
    }
    size--;

    printf("Array after deletion:\n");
    for(i=0;i<size;i++)
    {
        printf("%d ", arr[i]);
    }





}
>>>>>>> 76278e7b7f4e25bf4eaafdcd2961afecacce4f99
