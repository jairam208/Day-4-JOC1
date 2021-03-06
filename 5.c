#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap (int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void printArray (int arr[], int n)
{
    int x;
    printf("Enter a number to search : ");
    scanf("%d", &x);
    for (int i=0; i<n; i++)
    {
        if(arr[i]==x)
        {
            printf("%d ", i);
            printf("\n");
        }
    }
}

void randomize ( int arr[], int n )
{
    srand ( time(NULL) );
    for (int i=n-1; i>0; i--)
    {
        int j = rand() % (i+1);
        swap(&arr[i], &arr[j]);
    }
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr) / sizeof(arr[0]);
    randomize (arr, n);
    printArray (arr, n);
    return 0;
}