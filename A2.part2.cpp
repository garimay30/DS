//Write a c++ program to store the roll no of 5 students in an array and search for the given roll no. Display student found if the roll no is present otherwise display student not found.
#include <iostream>
using namespace std;
int main()
{
 int rno;
 int searchID;
 int a[5];
 cout<<"Enter the roll numbers of 5 students"<<endl;

    for (int i= 0; i<5; i++)
    {
        cin>> a[i];

    }
cout<<"Enter roll no you want to search"<<endl;
cin>>searchID;

for(int j=0; j<5; j++)
{
    if(a[j]==searchID)
    {
        cout<<"STUDENT FOUND!"<<endl;
        return 0;
    
    }

}
 cout<<"STUDENT NOT FOUND!"<<endl;

 return 0;
}
