#include <iostream>
#include <string>

using namespace std;

int main()
{
    int number1 = 0, number2 = 0;
    int sum = 0;
    int output_J = 0;
    string arr_Input;
    string A[10]={"BNZ","AMW","KLY","JVX","HU","GT","FS","ER","DOQ","CIP",} ;

    while(cin >> arr_Input)
    {

        int count = 8;
        for(register int j = 0; j < 8; j++)
        {
            output_J = arr_Input[j] - '0';
            output_J *= count;
            sum += output_J;
            count--;
        }

        sum = sum + (arr_Input[8]-'0'); // �]��arr_Input[8]�O�ˬd�X�A�]�O�̫�@�X�A�ҥH�ݭn�t�~�[�J

        cout <<A[(10-(sum%10))%10 ] <<endl ;

    }
    return 0;
}
