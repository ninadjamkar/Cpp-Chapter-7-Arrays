#include<iostream>
using namespace std;
int main()
{
    int array[10]={12,23,34,45,56,67,78,89,90,100};
    int *ptr=&array[0];
    cout<<*ptr<<endl;
    *(ptr+2);
    cout<<*(ptr+2)<<endl;
}


OUTPUT -
12
34
