#include<iostream>
using namespace std;
int main()
{
    int students;
    int subjects;
    cout<<"Enter number of students: ";
    cin>>students;
    cout<<"Enter number of subjects: ";
    cin>>subjects;
    int marks[students][subjects];
    cout<<""<<endl;
    for(int i=1; i<=students; i++)
    {
        for(int j=1; j<=subjects; j++)
        {
            cout<<"Enter marks of student #"<<i<<" in subjects #"<<j<<": ";
            cin>>marks[i][j];
        }
    }
    cout<<""<<endl;
    for(int i=1; i<=students; i++)
    {
        for(int j=1; j<=subjects; j++)
        {
            cout<<"Student #"<<i<<" scored "<<marks[i][j]<<" marks in subject #"<<j<<endl;
        }
    }
}


OUTPUT -
Enter number of students: 3
Enter number of subjects: 3

Enter marks of student #1 in subjects #1: 66
Enter marks of student #1 in subjects #2: 68
Enter marks of student #1 in subjects #3: 75
Enter marks of student #2 in subjects #1: 78
Enter marks of student #2 in subjects #2: 60
Enter marks of student #2 in subjects #3: 84
Enter marks of student #3 in subjects #1: 88
Enter marks of student #3 in subjects #2: 72
Enter marks of student #3 in subjects #3: 69

Student #1 scored 66 marks in subject #1
Student #1 scored 68 marks in subject #2
Student #1 scored 75 marks in subject #3
Student #2 scored 78 marks in subject #1
Student #2 scored 60 marks in subject #2
Student #2 scored 84 marks in subject #3
Student #3 scored 88 marks in subject #1
Student #3 scored 72 marks in subject #2
Student #3 scored 69 marks in subject #3
