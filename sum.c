#include <stdio.h>
#include <stdlib.h>
#include "abs_max.h"

int sum(int arr[], int size)
{
    int k = abs_max(arr, size);
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        if (sum)
        {
            sum += arr[i];
        }
        else if (abs(arr[i]) == abs(k))
        {
            sum += k;
        }
    }
    return sum;
}
