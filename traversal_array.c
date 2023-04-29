#include<stdio.h>
int main(){
    int arr[5] = {10,20,30,40,50};
    printf("Elements of the array are: \n");
    for (int i=0; i<5;i++)
    {
        printf("arr[%d] = %d, ", i, arr[i]);
    }
}
