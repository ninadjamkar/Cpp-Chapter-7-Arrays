#include<iostream>
using namespace std;
int main()
{
    int multiplication[10];
    for(int i=0; i<10; i++)
    {
        multiplication[i]=5*(i+1);
    }
    for(int i=0; i<10; i++)
    {
        cout<<"5 X "<<i+1<<" = "<<multiplication[i]<<endl;
    }
    return 0;
}


OUTPUT -
5 X 1 = 5
5 X 2 = 10
5 X 3 = 15
5 X 4 = 20
5 X 5 = 25
5 X 6 = 30
5 X 7 = 35
5 X 8 = 40
5 X 9 = 45
5 X 10 = 50
