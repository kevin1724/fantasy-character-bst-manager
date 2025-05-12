//Kevin Ruiz Arzate
//
//Program 3 
// g++ -std=c++17 *.cpp -g -Wall 
#include "header.h"
// ABC class functions

character::character()  // constructor 
{


}

int character::add() // destructor 
{
    return 1;
}

bool character::display() // dispaly function to show info of character
{
    return 1;
}

bool character::remove_all()
{
    return true;
}

character *& character::get_next()
{
    return next;
}

// Wizard class functions
wizard::wizard()
{
    attack_range = 0.0;
}

wizard::~wizard()
{

}

int wizard::add() // function to get info for adding a character
{
    cout<<"Enter the attack range for the wizard: ";
    cin>>attack_range;
    cin.ignore(100,'\n');
    cout<<endl;

    return 1;
}

bool wizard::display() // dispaly function to show info of character
{
    cout<<endl;
    cout<<"WIZARD"<<endl;

    cout<<"Attack range:    "<<attack_range<<endl;
    return 1;
}

int wizard::edit()  // edit funciton 
{
    cout<<"Enter new range for wizard"<<endl;
    cin>>attack_range;
    cin.ignore(100,'\n');

    return 1;
}

bool wizard::remove_all()
{
    return 1;
}