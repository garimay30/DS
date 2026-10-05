//BANK TOKEN MANAGEMENT SYSTEM
//Write a C++ Program to store 5 recently served customer token numbers in a stack and display the service history starting from the most recently served customer.
#include<iostream>
using namespace std;
int main()
{
    int stack[5];
    int top=-1;
    cout<<"Enter Token Number:"<<endl;
    for( int i=0; i<5; i++)
        {
            cin>> stack[++top];
            
        }
    cout<<"Service history:"<<endl;
    while (top>=0)
        {
            cout<<" serving customer with token number:"<< stack[top--]<<endl;
        }
    return 0;
}
