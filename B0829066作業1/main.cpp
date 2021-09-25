#include <iostream>
#include <string.h>


using namespace std;

void swap(char *a, char *b);
void BubbleSort(char *Pointer,int number1);
void EXIT();

void swap(char *a, char *b) //�W�w�Ϋ��w
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
    exit(3); //�פ�{��
    return 3;
}

int main()
{
    int x, y;
    int number;

    cout << "==========��malloc��J1 , ��new��J2===============" << endl;
    cin >> number; // 1 or 2

    cout << "x�N���Jx�Ӧr��A��Jx: ";
    cin >> x;
    cout << "y�N��r����פ���j��y�A��Jy: ";
    cin >> y;



    char **Charing = NULL;
    char **Charing_NEW = NULL;


    Charing = (char**)malloc(x*sizeof(char*)); //���ͤ@�ӰʺA�r���}�C
    Charing_NEW = new char*[x];

    for (int i = 0; i < x; i++)
    {
        Charing[i] = (char*)malloc(y*sizeof(char)); //���ͤ@�ӤG���ʺA�r���}�C
        Charing_NEW[i] = new char[y];
    }


    for(int a = 0; a < x; ++a)
    {
        cout << "��J��" << a + 1 << "�Ӧr��: ";

        if(number == 1)
        {
            cin >> Charing[a]; //��J�r��
            if(strlen(Charing[a]) > y)
            {
                cout << "====================================== �r��� > y =======================  �{������" << endl;
                EXIT(y);
                break;
            }

        }

        else if(number == 2)
        {
            cin >> Charing_NEW[a];
            if(strlen(Charing_NEW[a]) > y)
            {
                cout << "====================================== �r��� > y =======================  �{������" << endl;
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
          if(number == 1) printf("bubble sort�Ƨǫ᪺�r��(malloc��): %s \n", Charing[i]);

          else if(number == 2) printf("bubble sort�Ƨǫ᪺�r��(new��): %s \n", Charing_NEW[i]);
     }



     for(int k = 0; k < x; k++)
     {
        free(Charing[k]); //����
     }
     free(Charing);

     delete [] Charing_NEW; //����

    return 0;
}
