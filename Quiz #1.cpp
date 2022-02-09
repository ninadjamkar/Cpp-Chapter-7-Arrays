#include<iostream>
using namespace std;
int main()
{
    int marks[5];
    for(int i=1; i<=5; i++)
    {
        cout<<"Enter the marks of student #"<<i<<": ";
        cin>>marks[i];
    }
    cout<<""<<endl;
    for(int i=1; i<=5; i++)
    {
        cout<<"Student #"<<i<<" scored "<<marks[i]<<" marks"<<endl;
    }
}


OUTPUT -
Enter the marks of student #1: 56
Enter the marks of student #2: 67
Enter the marks of student #3: 78
Enter the marks of student #4: 89
Enter the marks of student #5: 90

Student #1 scored 56 marks
Student #2 scored 67 marks
Student #3 scored 78 marks
Student #4 scored 89 marks
Student #5 scored 90 marks
