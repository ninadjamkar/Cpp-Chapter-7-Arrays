#include<iostream>
using namespace std;
int main()
{
    int array[]={1,2,3,4,5};
    int *b=&array[1];
    cout<<*b<<endl;
    *b++;
    cout<<*b<<endl;
}


OUTPUT -
2
3
