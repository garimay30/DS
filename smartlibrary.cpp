#include<iostream>
using namespace std;
int main()
{
    int book[10];
    int n=0;
    int choice;
    int searchID;
do
    {
    cout<<"===LIBRARY==="<<endl;
    cout<<"1.Add Book"<<endl;
    cout<<"2.Display"<<endl;
    cout<<"3.Search Book"<<endl;
    cout<<"4.Exit"<<endl;
    cout<<"Enter your choice"<<endl;
    cin>>choice;

        if(choice==1)
        {
            cout<<"Enter BookID"<<endl;
            cin>>book[n];
            n++;
            cout<<"BOOK ADDED!";
        }
        else if (choice ==2)
        {
            cout<<"Books in library"<<endl;
            for(int i=0; i<n; i++)
                {
                    cout<<book[i]<<endl;
                }
            
        }
        else if (choice == 3)
        {
            cout<<"Enter BookID to search";
            cin>>searchID;
            bool found = false;
            for (int j= 0; j<n; j++)
                {
                    if(book[j] == searchID)
                        {
            
                    cout<<"BOOK FOUND!";
                    return 0;
                }
                        
                }cout << "Book Not Found!";
            
            
        }
        
    }
while (choice !=4);
return 0;
}
