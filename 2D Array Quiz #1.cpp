#include<iostream>
using namespace std;
int main()
{
    int number[4][3]={{12,23,34},
                      {45,56,67},
                      {78,89,90},
                      {91,82,73}};
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<"TEST ["<<i<<"]["<<j<<"] = "<<number[i][j]<<endl;
        }
    }
}


OUTPUT -
TEST [0][0] = 12
TEST [0][1] = 23
TEST [0][2] = 34
TEST [1][0] = 45
TEST [1][1] = 56
TEST [1][2] = 67
TEST [2][0] = 78
TEST [2][1] = 89
TEST [2][2] = 90
TEST [3][0] = 91
TEST [3][1] = 82
TEST [3][2] = 73
