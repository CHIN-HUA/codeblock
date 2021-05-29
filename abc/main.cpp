/*#include <iostream>
using namespace std;

void Rank(int a, int b, string list[]) { // Rank(0, n - 1,list); n = 3 // 0, 2, a b c
    if (a == b) {
        for (int i = 0; i < a; i++)
        {
            cout << list[i];
        }
        cout << endl;
        }
    else {
        for (int i = a; i < b; i++) //0, 2
            {
            //swap(list[i], list[a]);
            Rank(a + 1, b,list);
            swap(list[i], list[a]);
        }
    }
}

int main() {
    int n;
    cin >> n;
    string list[n];
    for (int i = 0; i < n; i++)
    {
        cin >> list[i];
    }
    Rank(0, n ,list);
}*/


//abc
//acb
//bac
//bca
//cba
//cab


#include <iostream>
using namespace std;

void list(string *str, int start, int end) {
        if (start == end) {
            for (int i = 0; i <= end; i++)
                cout << str[i];
            cout << endl;
        }
        else
        {
            for (int j = start; j <= end; j++) {
                swap(str[j], str[start]);
                list(str, start + 1, end);
                swap(str[j], str[start]);
            }
        }
    }
int main() {
    int n, i;
    cin >> n;
    string *str[n];
    for (i = 0; i < n; i++)
    {
        cin >> str[i];
    }
    list(str, 0, n - 1);
    return 0;
}


