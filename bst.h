//Kevin Ruiz Arzate
//
// Program 3 
// this file is for the data structure to manage the characters


#ifndef BINARYSEARCHTREE_H
#define BINARYSEARCHTREE_H

#include "header.h"
#include <random>

class LLnode  // node for double characters
{
    public:
        LLnode();
        LLnode *& get_next();
    protected:
        LLnode * next;
};


class node // class for the node 
{
    public:
        node();
        ~node();
        int insert();
        int insert(const character & data);
        int compare(const string to_check);
        int add_new(const string ttitle);
        void display();

        node *& get_left(); // to get left node
        node *& get_right(); // to et right node
        string get_name();
   
        void set_left(node *& set);
        void set_right(node *& set);
        
        int set_title(const string ttitle);


    protected:
        string title;

        character * head; // LLL for overlapping characters
        node * left; // left node for the tree
        node * right; // right node for the tree

};





class bst // class for the binary search tree
{
    public:
        bst();
        ~bst();
        int add_new(node *& root, const string title);
        int insert(const character & data);
        int display();
        void display(node * root);
        int search(const string to_find);
        int remove();
        int remove(const string to_remove);
        int remove_all();
        int search(const string to_find[]);

        bst & operator += (const string temp);

        node* get_node_by_name(const string& name);
        int create_fight(const string& name1, const string& name2);
    private:
        node* get_node_by_name(node* root, const string& name);
        int remove(node*& root, const string to_remove);
        int search(node* root, const string to_find);
        int remove_all(node *& root);
        node * root;


};






#endif //BINARYSEARCHTREE_H