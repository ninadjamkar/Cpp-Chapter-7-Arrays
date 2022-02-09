#include<iostream>
using namespace std;
int main()
{
    int numbers[2][3][2]={
                            {{1,2},{3,4},{5,6}},
                            {{7,8},{9,10},{11,12}}
                         };
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            for(int k=0; k<2; k++)
            {
                cout<<"The element at position ["<<i<<"]["<<j<<"]["<<k<<"] = "<<numbers[i][j][k]<<endl;
            }
        }
    }
    return 0;
}


OUTPUT -
The element at position [0][0][0] = 1
The element at position [0][0][1] = 2
The element at position [0][1][0] = 3
The element at position [0][1][1] = 4
The element at position [0][2][0] = 5
The element at position [0][2][1] = 6
The element at position [1][0][0] = 7
The element at position [1][0][1] = 8
The element at position [1][1][0] = 9
The element at position [1][1][1] = 10
The element at position [1][2][0] = 11
The element at position [1][2][1] = 12

