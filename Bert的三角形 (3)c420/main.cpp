#include <iostream>

using namespace std;


int main() {
    int n;

    while(cin >> n)
    {
        for(int i = 0; i < n; i++) //���V
        {
            for(int j = 0; j < n-i-1; j++) //��V
            {
                cout<<"_";
            }

            for(int j = 0; j < (2 * i + 1); j++) // (2 * i + 1)���P (�_��

            {
                cout<<"*";
            }

            for(int j = 0; j < n-i-1; j++)
            {
                cout<<"_";
            }

        cout<<endl;
        }
    }
}
