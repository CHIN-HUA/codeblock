#include <iostream>

using namespace std;


int main() {
    int n;

    while(cin >> n)
    {
        for(int i = 0; i < n; i++) //直向
        {
            for(int j = 0; j < n-i-1; j++) //橫向
            {
                cout<<"_";
            }

            for(int j = 0; j < (2 * i + 1); j++) // (2 * i + 1)顆星 (奇數

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
