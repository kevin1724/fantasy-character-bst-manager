//Kevin Ruiz Arzate
//
//Program 3 
// g++ -std=c++17 *.cpp -g -Wall 
// file for the main 
#include "bst.h"

int main()
{  
    int test=10;
    bst tree;


    cout<<"Welcome to the Character Management System"<<endl;
    while(test != 0)
    {
        cout<<endl;
        cout<<"***********************************"<<endl;
        cout<<"Enter 1 to add a new character"<<endl;
        cout<<"Enter 2 to search for a character"<<endl;
        cout<<"Enter 3 to remove a character"<<endl;
        cout<<"Enter 4 to display all characters"<<endl;
        cout<<"Enter 5 to remove all characters"<<endl;
        cout<<"Enter 6 to fight two characters"<<endl;
        cout<<"Enter 0 to exit the program"<<endl;
        cout<<"***********************************"<<endl;
        cout<<endl;

        cin>>test;
        cin.ignore(100,'\n');
        if(test == 1)
        {
            string temp;
            cout<<"Enter a name for the character to add"<<endl;
            getline(cin, temp);

            tree += temp;
        }
        if(test == 2)
        {
            string temp;
            cout<<"Enter name to search for character"<<endl;
            getline(cin, temp);

            
            tree.search(temp);
        }
        if(test == 3)
        {
            string temp;
            cout<<"Enter name to remove character"<<endl;
            getline(cin, temp);

            
            tree.remove(temp);
        }
        if(test == 4)
        {
            tree.display();
        }

        if(test == 5)
        {
            
            tree.remove_all();
        }
        if(test == 6)
        {
            string one, two;

            cout << "Enter name of the first character: ";
            getline(cin, one);
            cout << "Enter name of the second character: ";
            getline(cin, two);
            tree.create_fight(one,two);
            cout<<endl;
        }
    }

    cout<<endl;

    cout<<"Thanks for testing my program!"<<endl;

    return 0;
}
