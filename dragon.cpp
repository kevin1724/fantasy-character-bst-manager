//Kevin Ruiz Arzate
//
//Program 3 
// g++ -std=c++17 *.cpp -g -Wall 
// file for the dragon class
#include "header.h"

// --- class functions for dragon
dragon::dragon()
{
    speed = 0.0;
    fire_dmg = 0.0;
}

dragon::~dragon()
{

}

int dragon::add() // function to get info for adding a character
{
    cout<<"Craeting Dragon"<<endl;
    cout<<"Enter the max speed for the Dragon: ";
    cin>>speed;
    cin.ignore(100,'\n');
    cout<<endl;

    cout<<"Enter the fire damage: ";
    cin>>fire_dmg;
    cin.ignore(100,'\n');
    cout<<endl;

    return 1;
}


int dragon::edit()  // edit funciton 
{
    int choice;
    cout<<"Enter (1) to edit speed"<<endl;
    cout<<"Enter (2) to edit fire damage"<<endl;
    cin>>choice;
    cin.ignore(100,'\n');

    switch (choice)
    {
    case 1:
        cout<<"Enter the new speed"<<endl;
        cin>>speed;
        cin.ignore(100,'\n');

        break;
    case 2:
        cout<<"Enter the new fire damage"<<endl;
        cin>>fire_dmg;
        cin.ignore(100,'\n');

        break;
    default:
        cout<<"ERROR INVALID NUMBER"<<endl;
        break;
    }

    return 1;
}

bool dragon::display()// dispaly function to show info of character
{
    cout<<"DRAGON"<<endl;
    cout<<"Top speed:   "<<speed<<endl;
    cout<<"Fire damage:     "<<fire_dmg<<endl;
    

    return 1;
}

bool dragon::remove_all()
{
    return 1;
}