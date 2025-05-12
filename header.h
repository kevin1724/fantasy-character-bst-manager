//Kevin Ruiz Arzate
//
//Program 3 
// g++ -std=c++17 *.cpp -g -Wall 
// file for header
#ifndef character_H
#define character_H

#include <iostream>
#include <cstring>
#include <vector>
#include <cctype>
using namespace std;

class character // ABC class
{
    public: 
        character();
        int virtual add() = 0;
        int virtual edit() = 0;
        bool virtual display() =0;

        bool virtual remove_all() = 0;
        character *& get_next();
    protected:
        character * next;
        string name;
        string desc;
        float hp;

        
};

class wizard:public character // class for wizard
{
    public:
        wizard();
        virtual ~wizard();
        int add();
        int edit();
        bool display();
        bool remove_all();
    private:
        float attack_range;
        
};

class dragon:public character // class for dragon
{
    public:
        dragon();
        virtual ~dragon();

        int add();
        int edit();
        bool display();
        bool remove_all();
    private:
        float speed;
        float fire_dmg;
};

class titan:public character // cladd for titan
{
    public:
        titan();
        virtual ~titan();

        int add();
        int edit();
        bool display();
        bool remove_all();
    private:
        int hp_regain;
        float attack;
    
};


#endif 