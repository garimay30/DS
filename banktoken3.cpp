//BANK TOKEN MANAGEMENT SYSTEM
//Write a menu driven C++ Program for a simple bank token system that allows the user to issue a token, display all tokens, serve a customer and exit the program
#include<iostream>
using namespace std;
int main()
{
    int queue[5];
    int front=0, rear=0;
    int choice;
    do
        {
            cout<<"Bank token system menu:"<<endl;
            cout<<"1.Issue token"<<endl;
            cout<<"2.Display tokens"<<endl;
            cout<<"3.Serve customer"<<endl;
            cout<<"4.Enter your choice"<<endl;
            cin>>choice;
            if(choice == 1)
            {
                if(rear<5)
                {
                    cout<<"Enter the token number:";
                    cin>>queue[rear];
                    rear++;
                    cout<<"Token issued successfully"<<endl;
                }
                else
                {
                    cout<<"Token limit reached"<<endl;
                }
            }
            else if(choice == 2)
            {
                if( front == rear)
                {
                    cout<<"No tokens to display"<<endl;
                    
                }
                   else
                {
                    cout<<"displaying tokens"<<endl;
                    for( int i= front; i<rear; i++)
                        {
                            cout<<queue[i]<<endl;
                        }
                }
            }
            else if(choice==3)
            {
                if (front< rear)
                {
                    cout<<"serving customer"<<endl;
                    front++;
                }
                else{
                    cout<<"No customers to serve"<<endl;
                }
            }
            else if (choice==4)
            {
                cout<<"exiting"<<endl;
            }
            else{
                cout<<"invalid choice"<<endl;
            }
            return 0;
            }
        while (choice !=4);

        }
