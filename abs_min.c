#include <stdio.h>
#include <stdlib.h>

int abs_min(int arr[], int size)
{
    int k = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (abs(arr[i]) < abs(k))
        {
            k = arr[i];
        }
    }
    return k;
}