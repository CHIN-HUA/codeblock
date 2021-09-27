#include <iostream>
#include <string.h>


using namespace std;

void swap(char *a, char *b);
void BubbleSort(char *Pointer,int number1);
void EXIT();

void swap(char *a, char *b) //規定用指針
{
   char tmp = *a;
   *a = *b;
   *b = tmp;
}

void BubbleSort(char *Pointer,int number1)
{
     int i, j;

        for(i = 0;i < number1 -1;i++)
        {
          for(j = 0;j < number1 -1 -i;j++)
          {
                if(*(Pointer +j) < *(Pointer +j +1))
                      swap(Pointer +j +1, Pointer +j);
          }
        }

}

int EXIT(int y)
{
    exit(3); //終止程式
    return 3;
}

int main()
{
    int x, y;
    int number;

    cout << "==========用malloc輸入1 , 用new輸入2===============" << endl;
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


    for(int a = 0; a < x; ++a)
    {
        cout << "輸入第" << a + 1 << "個字串: ";

        if(number == 1)
        {
            cin >> Charing[a]; //輸入字串
            if(strlen(Charing[a]) > y)
            {
                cout << "====================================== 字串數 > y =======================  程式結束" << endl;
                EXIT(y);
                break;
            }

        }

        else if(number == 2)
        {
            cin >> Charing_NEW[a];
            if(strlen(Charing_NEW[a]) > y)
            {
                cout << "====================================== 字串數 > y =======================  程式結束" << endl;
                EXIT(y);
                break;
            }
        }
    }



    for(int w = 0; w < x; w++)
    {
        BubbleSort(*(Charing + w), y-2);
    }
    for(int r = 0; r < x; r++)
    {
        BubbleSort(*(Charing_NEW + r), y-2);
    }


     for(int i = 0;i < x; ++i)
     {
          if(number == 1) printf("bubble sort排序後的字串(malloc版): %s \n", Charing[i]);

          else if(number == 2) printf("bubble sort排序後的字串(new版): %s \n", Charing_NEW[i]);
     }



     for(int k = 0; k < x; k++)
     {
        free(Charing[k]); //釋放
     }
     free(Charing);

     delete [] Charing_NEW; //釋放

    return 0;
}
