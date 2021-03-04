#include<stdio.h>
void swap(int *, int *);


int main()
{
	int array[5] = {3, 6, 9, -8, 1};
	for(int i = 0; i < 5; i++)
    {
        int min_index = i;

        for(int j = i + 1; j < 5; j++)
        {
            if(array[j] < array[min_index ])
            {
                min_index = j;
            }
        }

        swap(&array[i], &array[min_index ]);

        printf("%d", array[i]);
    }
}

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
