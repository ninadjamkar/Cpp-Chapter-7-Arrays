#include<iostream>
using namespace std;
void reverse(int *array, int n)
{
    int temp;
    for(int i=0; i<n/2; i++)
    {
        temp=array[i];
        array[i]=array[n-i-1];
        array[n-i-1]=temp;
    }
}
int main()
{
    int array[]={12,23,34,45,56,67,78,89,90};
    reverse(array, 9);
    for(int i=0; i<9; i++)
    {
        cout<<"The value of element "<<i<<" is: "<<array[i]<<endl;
    }
    return 0;
}


OUTPUT -
The value of element 0 is: 90
The value of element 1 is: 89
The value of element 2 is: 78
The value of element 3 is: 67
The value of element 4 is: 56
The value of element 5 is: 45
The value of element 6 is: 34
The value of element 7 is: 23
The value of element 8 is: 12
