#include<iostream>
using namespace std;
void printarray(int *ptr, int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<"The value at position #"<<i+1<<" is: "<<*(ptr+i)<<endl;
    }
}
int main()
{
    int array[]={12,23,34,45,56,67,78,89,90,100};
    printarray(array, 10);
}


OUTPUT -
The value at position #1 is: 12
The value at position #2 is: 23
The value at position #3 is: 34
The value at position #4 is: 45
The value at position #5 is: 56
The value at position #6 is: 67
The value at position #7 is: 78
The value at position #8 is: 89
The value at position #9 is: 90
The value at position #10 is: 100
