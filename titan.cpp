//Kevin Ruiz Arzate
//
//Program 3 
// g++ -std=c++17 *.cpp -g -Wall
// file for the titan class 
#include "header.h"

// ---- class function for Titan

titan::titan()
{
    hp_regain = 0;
    attack = 0;
}

titan::~titan()
{

}

int titan::add() // function to get info for adding a character
{
    cout<<"Creating TITAN"<<endl;

    cout<<"Enter HP Regain: ";
    cin>>hp_regain;
    cin.ignore(100,'\n');
    cout<<endl;

    cout<<"Enter the attack hp: ";
    cin>>attack;
    cin.ignore(100,'\n');
    cout<<endl;

    return 1;
}

int titan::edit()  // edit funciton 
{
    int choice;
    cout<<"Enter (1) to edit hp regain"<<endl;
    cout<<"Enter (2) to edit attack"<<endl;
    cin>>choice;
    cin.ignore(100,'\n');
    switch (choice)
    {
    case 1:
        
        cout<<"Enter new hp regain"<<endl;
        cin>>hp_regain;
        cin.ignore(100,'\n');

        break;
    case 2:
        cout<<"Enter new attack"<<endl;
        cin>>attack;
        cin.ignore(100,'\n');

    default:
        cout<<"ERROR INVALID NUMBER"<<endl;
        break;
    }

    return 1;
}



bool titan::display() // dispaly function to show info of character
{
    cout<<"TITAN"<<endl;

    cout<<"HP REGAIN:   "<<hp_regain<<endl;
    cout<<"ATACK:   "<<attack<<endl;

    return true;
}

bool titan::remove_all()
{
    return 1;
}
