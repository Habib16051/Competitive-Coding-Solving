<<<<<<< HEAD
#include<stdio.h>
int main()
{
    int arr[50], size, i, s_value;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter the elements of the array: ");
    for(i=0;i<size;i++)
    {
        scanf("%d", &arr[i]);
    }
    // Now take a search value from the user to be searched in the array
    printf("Enter an element from the array to be searched: ");
    scanf("%d", &s_value);

    //Traverse the array to find the search value in the array
    for(i=0;i<size;i++)
    {
        if(arr[i] == s_value)
        {
            printf("Search value found in index: %d\n", i);
            printf("The desired search value is: %d\n", arr[i]);
            break;
        }
    }

    if(i==size)
    {
        printf("Value is not found in this array!");
    }



}
=======
#include<stdio.h>
int main()
{
    int arr[50], size, i, s_value;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter the elements of the array: ");
    for(i=0;i<size;i++)
    {
        scanf("%d", &arr[i]);
    }
    // Now take a search value from the user to be searched in the array
    printf("Enter an element from the array to be searched: ");
    scanf("%d", &s_value);

    //Traverse the array to find the search value in the array
    for(i=0;i<size;i++)
    {
        if(arr[i] == s_value)
        {
            printf("Search value found in index: %d\n", i);
            printf("The desired search value is: %d\n", arr[i]);
            break;
        }
    }

    if(i==size)
    {
        printf("Value is not found in this array!");
    }



}
>>>>>>> 76278e7b7f4e25bf4eaafdcd2961afecacce4f99
