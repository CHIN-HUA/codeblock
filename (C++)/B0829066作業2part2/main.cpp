#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

int EXIT(int y)
{
    exit(3); //終止程式
    return 3;
}

int main()
{
    int x, y;
    int max;
    int number;
    const char* d = "  "; //分割依據
    char *p ;  //儲存每次分割結果
    char *b;  //儲存每次分割結果2
    char *t;
    char *t1;
    char *registering; //暫存
    int count = 1;
    char *arr[10000];
    char *aer[10000];

    cout << "          ==========用malloc輸入1===============      " << endl;
    cin >> number; // 1 or 2

    cout << "x代表輸入x個字串，輸入x: ";
    cin >> x;
    cout << "y代表字串長度不能大於y，輸入y: ";
    cin >> y;



    char **Charing = NULL;
    char **Charing_NEW = NULL;


    Charing = (char**)malloc(x*sizeof(char*)); //產生一個動態字元陣列
    Charing_NEW = new char*[x];

    for (int i = 0; i < x; i++)
    {
        Charing[i] = (char*)malloc(y*sizeof(char)); //產生一個二維動態字元陣列
        Charing_NEW[i] = new char[y];
    }

    char hhh[10];
    cin.getline(hhh, 1);

    for(int a = 0; a < x; ++a)
    {
        cout << "輸入第" << a + 1 << "個字串: ";
        cin.getline(Charing[a], y);

        strcpy(Charing_NEW[a], Charing[a]);


    }

        max = 0;

    for(int a = 0; a < x; ++a)
    {


        if(number == 1)
        {

            d = " ";
            p = strtok(Charing[a], d);

             arr[a] = p;


            // p[0] 長度

            for (int c= a; c < x; c++)
            {
                if (strlen(p) > max)
                {
                    max = strlen(p);
                }
            }


                d="";

                p = strtok(NULL,d);

                aer[a] = p;

        }
    }

    for(int gg = 0; gg < x; gg++)
    {
        cout << setw(max) << *(arr+gg) << " " << *(aer+gg) << endl;
    }




     for(int k = 0; k < x; k++)
     {
        free(Charing[k]); //釋放
     }
     free(Charing);

     delete [] Charing_NEW; //釋放

    return 0;
}

