#include <stdio.h>
#include <stdlib.h>
#include "abs_max.h"
#include "abs_min.h"
#include "diff.h"
#include "sum.h"

int output(int f, int arr[], int size)
{
    switch (f)
    {
    case 0:
        printf("%d", abs_max(arr, size));
        break;
    case 1:
        printf("%d", abs_min(arr, size));
        break;
    case 2:
        printf("%d", diff(arr, size));
        break;
    case 3:
        printf("%d", sum(arr, size));
        break;
    default:
        printf("Данные некорректны");
        break;
    }
    return 0;
}