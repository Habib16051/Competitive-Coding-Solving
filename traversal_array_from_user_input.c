#include<stdio.h>
int main(){

    int arr[50], size, i;
    printf("Please enter the size of the array: \n");
    scanf("%d", &size);
    printf("Enter the elements of the array: \n");
    for(i=0;i<size;i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Elements of array are: \n");
    for(i=0;i<size;i++)
    {
        printf("%d\n", arr[i]);
    }
}
