#include <stdio.h>
#include <stdlib.h>

int main()
{

    int arr[6] = {0, 5, 2, 9, 7, 3};
    int n = 6;

  for (int i = 0; i < n; i++)
{
    int j = i;

    while (j > 0 && arr[j - 1] > arr[j])
    {

      int temp = arr[j];
      arr[j] = arr[j - 1];
      arr[j - 1] = temp;
      j--;

    }
}

for (int a = 0; a<6; a++)
{
    printf("%d",arr[a]);
}

}
