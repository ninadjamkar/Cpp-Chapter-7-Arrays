#include<iostream>
using namespace std;
int main()
{
    int numbers[3][3];
    cout<<"Enter nine numbers: "<<endl;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin>>numbers[i][j];
        }
    }
    cout<<""<<endl;
    cout<<"The numbers are:-"<<endl;
    cout<<""<<endl;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<"TEST ["<<i<<"]["<<j<<"] = "<<numbers[i][j]<<endl;
        }
    }
}


OUTPUT -
Enter nine numbers: 
12
23
34
45
56
67
78
89
90

The numbers are:-

TEST [0][0] = 12
TEST [0][1] = 23
TEST [0][2] = 34
TEST [1][0] = 45
TEST [1][1] = 56
TEST [1][2] = 67
TEST [2][0] = 78
TEST [2][1] = 89
TEST [2][2] = 90
