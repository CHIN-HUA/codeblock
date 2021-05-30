#include <iostream>
using namespace std;

int number, arr[16];

void setmath(int a)
{
    if(a == number)
    {
        for(int i = 0; i < number; ++i)
        {
            cout << arr[i];
        }
        puts("");
        return;
    }
    arr[a] = 0;
    setmath(a + 1);
    arr[a] = 1;
    setmath(a + 1);

}

int main()
{
    while(cin >> number)
    {
        setmath(0);
    }
    return 0;
}
