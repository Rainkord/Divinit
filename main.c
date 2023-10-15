#include <stdio.h>
#include <stdlib.h>
#include "output.h"

int main()
{
    int arr[100];
    int f;
    int size = 0;
    scanf("%d", &f);
    while (getchar() != '\n')
    {
        scanf("%d", &arr[size]);
        ++size;
    }
    output(f, arr, size);
    return 0;
}