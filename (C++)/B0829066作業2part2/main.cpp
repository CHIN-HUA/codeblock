#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

int EXIT(int y)
{
    exit(3); //�פ�{��
    return 3;
}

int main()
{
    int x, y;
    int max;
    int number;
    const char* d = "  "; //���Ψ̾�
    char *p ;  //�x�s�C�����ε��G
    char *b;  //�x�s�C�����ε��G2
    char *t;
    char *t1;
    char *registering; //�Ȧs
    int count = 1;
    char *arr[10000];
    char *aer[10000];

    cout << "          ==========��malloc��J1===============      " << endl;
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

    char hhh[10];
    cin.getline(hhh, 1);

    for(int a = 0; a < x; ++a)
    {
        cout << "��J��" << a + 1 << "�Ӧr��: ";
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


            // p[0] ����

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
        free(Charing[k]); //����
     }
     free(Charing);

     delete [] Charing_NEW; //����

    return 0;
}

