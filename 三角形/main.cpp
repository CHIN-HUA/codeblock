#include <iostream>

using namespace std;
void arrayMax(int [], int);

int main()
{
    int array[5];
    int i;

    for(int i = 0; i < 5; i++)
    {
        cout << "¿é¤J¼Æ¦r:";

        cin >> array[i];
    }

    arrayMax(array, 5);

}

void arrayMax(int array[], int h)
{
    int i, max = 0;
    for(int i = 0; i < 5; i++)
    {
        if(array[i] > max)
        {
            max = array[i];
        }
    }
    cout << max;
}
