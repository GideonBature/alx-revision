#include "sorts.h"

int main(void)
{
    int i, j, flag, temp;
    int array[] = { 16, 14, 5, 6, 8, 9, 10};
    int n = sizeof(array) / sizeof(array[0]);

    for (i = 0; i < n - 1; i++)
    {
        flag = 0;
        for (j = 0; j < n - 1 - i; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                flag = 1;
            }
        }
        if (flag == 0)
            break;
    }

    for (i = 0; i < n; i++)
    {
        printf("The array at index [%d] is [%d]\n", i, array[i]);
    }

}