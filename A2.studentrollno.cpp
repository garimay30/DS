// write a c++ program to store the roll no of 5 students and display all the roll numbers enetered by the user
#include <iostream>
using namespace std;
int main()
{
    int rno;
    int a[5];
    cout<<"Enter the roll numbers of 5 students"<<endl;

    for (int i= 0; i<5; i++)
    {
        cin>> a[i];

    }
cout<<"The roll no of the students are:"<<endl;
 for (int i=0;i<5;i++)
 {
    cout<<a[i]<<" ";
 }
}
