#include "sorts.h"

int main(void)
{
    int i, j, temp;
    int array[] = { 16, 14, 5, 6, 8, 9, 10, 3, 12, 63, 3};
    int n = sizeof(array) / sizeof(array[0]);

    for (i = 1; i < n; i++)
    {
        temp = array[i];
        j = i -1;
        while (j >= 0 && array[j] > temp)
        {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = temp;
    }

    for (i = 0; i < n; i++)
        printf("The Sorted array at index [%d] is [%d]\n", i, array[i]);

}
