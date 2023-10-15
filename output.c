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
        printf("%d\n", abs_max(arr, size));
        break;
    case 1:
        printf("%d\n", abs_min(arr, size));
        break;
    case 2:
        printf("%d\n", diff(arr, size));
        break;
    case 3:
        printf("%d\n", sum(arr, size));
        break;
    default:
        printf("Данные некорректны\n");
        break;
    }
    return 0;
}