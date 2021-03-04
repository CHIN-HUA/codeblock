#include <stdio.h>


void staticArrayInit();
void automaticArrayInit();


int main()
{
    puts("first call to each funtion:");
    staticArrayInit();
    automaticArrayInit();

    puts("\n\nsecond call to each funtion:");
    staticArrayInit();
    automaticArrayInit();

    void staticArrayInit()
    {
        static int array1[ 3 ];
        size_t i;

        puts("\nvalues on entering staticArrayInit:");


        for(i = 0; i <= 2; ++i)
        {
            printf("array[%u] = %d", i, array1[ i ]);
        }

        puts("\nvalues on exiting staticArrayInit:");

        for(i = 0; i <= 2; ++i)
        {
            printf("array[%u] = %d", i, array[ i ] += 5);

        }
    }

    void automaticArrayInit()
    {
        int array2[ 3 ] = {1, 2, 3};
        size_t i;

        puts("\n\nvalues on exntering automaticArrayInit:");

        for(i = 0; i <= 2; ++i)
        {
            printf("array2[%u] = %d", i, array[ i ] += 5);

        }

    }

    return 0;
}
