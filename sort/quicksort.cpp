#include <stdio.h>
#include <stdlib.h>

void quick_sort(int *array, int left, int right)
{
        if (left >= right)
                return;
        int middle, i, j;
        int tmp;
        middle = left - 1;
        for (i = left; i < right; i++)
        {
                if (array[right-1] > array[i-1])
                {
                        middle ++;
                        tmp = array[i-1];
                        array[i-1] = array[middle-1];
                        array[middle-1] = tmp;
                }
        }
        middle ++;
        tmp = array[i-1];
        array[i-1] = array[middle-1];
        array[middle-1] = tmp;
        quick_sort(array, left, middle-1);
        quick_sort(array, middle+1, right);
}

int main()
{
        int n;
        int *array;
        int i;
        scanf("%d", &n);
        array = (int *) malloc(sizeof(int) * n);
        for (i = 0; i < n; i++)
        {
                scanf("%d", &array[i]);
        }

        quick_sort(array, 1, n);

        for (i = 0; i < n-1; i++)
        {
                printf("%d ", array[i]);
        }
        printf("%d\n", array[n-1]);
        free(array);
        array = 0;
        return 0;
}
