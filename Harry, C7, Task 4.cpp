#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    int multiplication[10];
    for(int i=0; i<10; i++)
    {
        multiplication[i]=number*(i+1);
    }
    for(int i=0; i<10; i++)
    {
        cout<<number<<" X "<<i+1<<" = "<<multiplication[i]<<endl;
    }
    return 0;
}


OUTPUT -
Enter a number: 8
8 X 1 = 8
8 X 2 = 16
8 X 3 = 24
8 X 4 = 32
8 X 5 = 40
8 X 6 = 48
8 X 7 = 56
8 X 8 = 64
8 X 9 = 72
8 X 10 = 80
