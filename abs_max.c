#include <stdio.h>
#include <stdlib.h>

int abs_max(int arr[], int size)
{
    int k = 0;
    for (int i = 0; i < size; i++)
    {
        if (abs(arr[i]) > abs(k))
        {
            k = arr[i];
        }
    }
    return k;
}
