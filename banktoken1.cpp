//BANK TOKEN MANAGEMENT SYSTEM
//Write a C++ Program to store 5 customer token numbers in a queue and serve the customers in the same order in which they have received their token
#include <iostream>
using namespace std;
int main()
{
    int a[5];
    int front=0, rear=0;
    cout<<"Enter the token number"<<endl;
    for ( int i=0; i<5; i++)
        {
            cin>> a[rear];
            rear++;
        }
    while(front<rear)
          {
              cout<<"Serving customer with token number:"<<a[front]<<endl;
              front++;
          }
    return 0;
}
