//Write a C++ program to store 5 customer order numbers in a queue and process the orders in the same order in which they were received. 
#include <iostream>
using namespace std;
int main()
{
    int queue[5];
    int front=0,rear=0;
    cout << "Enter order numbers of 5 customers:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> queue[rear];
        rear++;
    }
    while (front<rear)
    {
        cout << "Processing order number: " << queue[front] << endl;
        front++;
    }
    return 0;
}
