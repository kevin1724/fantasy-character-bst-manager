//Kevin Ruiz Arzate
//
// Program 3 

#include "bst.h"

// ----- class nodes functions

node::node()  // constructor
{
    left = nullptr;
    right = nullptr;
    head = nullptr;
}

node::~node()  // destructor
{
    if (left) {
        delete left;
    }
    if (right) {
        delete right;
    }
}

node *& node::get_left() // gets the left node 
{
    return left;
}

node *& node::get_right() // gets the right node
{
    return right;
}

void node::set_left(node *& set)  // sets the left node
{
    left = set;
}

void node::set_right(node *& set) // sets the right node
{
    right = set;
}

int node::insert() 
{

    return 1;
}

string node::get_name()  // returns the name 
{
    return title;
}

int node::set_title(const string ttitle) // sets the name for the character
{
    title = ttitle;
    return 1;
}


int node::insert(const character & data)  // insert function to add a character usng RTTI
{
    if(!head)  // if there is no head it creats a new node
    {
        const wizard * wd = dynamic_cast<const wizard*>(&data);
        if(wd)
        {
            head = new wizard(*wd);
            return 1;
        }
        const titan * tn = dynamic_cast<const titan*>(&data);
        if(tn)
        {
            head = new titan(*tn);
            return 1;
        }
        const dragon * dn = dynamic_cast<const dragon*>(&data);
        if(dn)
        {
            head = new dragon(*dn);
            return 1;
        }
    }
    else{ // there is root 
        character * temp = nullptr;
        const wizard * wd = dynamic_cast<const wizard*>(&data);
        if(wd)
        {
            temp = new wizard;
        }
        const titan * tn = dynamic_cast<const titan*>(&data);
        if(tn)
        {
            temp = new titan;
        }
        const dragon * dn = dynamic_cast<const dragon*>(&data);
        if(dn)
        {
            temp = new dragon;
        }
        if(temp)
        {
            temp->get_next() = head;
            head = temp;
            return 1;
        }

    }

    return 0;
}
int node::add_new(const string ttitle)  // to create new character name
{
    title = ttitle; 

    return 1;
}

int node::compare(const string to_check)  // to compare two characters
{
    if(title == to_check)
        return 0;
    else 
        return 1;
}

void node::display()  // to dispaly the info 
{
    if(left){
        left->display();
    }
    cout<< "Characters :"<< title << ""<<endl;
    if (head) {
        head->display();
    }
    if (right) {
        right->display();
    }
}
// ----- bst class functions

bst::bst()  // constructor 
{
    root = nullptr;
}

bst::~bst()  // destructor
{

}

bst & bst::operator += (const string temp)  // operator overload
{
    add_new(root, temp);
    return*this;
}

int bst::add_new(node *& root, const string title)  // adds a new character and has menu to ask client which one to add
{
    if (!root)
    {
        root = new node;
        root->set_title(title);
        
        int ttest;        
        cout<<endl;             
        cout<<"***********************************"<<endl;     // submenu to ask which character
        cout<<"Enter 1 to add a new Wizard"<<endl;
        cout<<"Enter 2 to add a new Dragon"<<endl;
        cout<<"Enter 3 to add a new Titan"<<endl;
        cout<<"***********************************"<<endl;
        cout<<endl;

        cin>>ttest;
        cin.ignore(100,'\n');

        if(ttest == 1)
        {
            wizard w;
            w.add();
            root->insert(w);
            return 1;
        }    

        if(ttest == 2)
        {
            dragon d;
            d.add();
            root->insert(d);
        }

        if(ttest == 3)
        {
            titan t;
            t.add();
            root->insert(t);
        }
        
        return 1;
    }
    
    if (title.compare(root->get_name()) < 0)
    {
        return add_new(root->get_left(), title);
    }
    else if (title.compare(root->get_name()) > 0)
    {
        return add_new(root->get_right(), title);
    }
    else
    {
        cout << "Character with name " << title << " already exists." << endl;
        return 0;
    }
    return 1;
}

int bst::display() // wrapper function to display the tree
{
    display(root);
    return 1;
}

void bst::display(node * root) // display function to display all 
{
    if (root)
    {
        display(root->get_left());

        cout << "Name: " << root->get_name() << endl;
        root->display();
        cout << endl;

        display(root->get_right());
    }
}

int bst::remove_all()  // wrapper function to remove all
{
    return remove_all(root);

    cout<<"Events cleared!"<<endl;

}

int bst::remove_all(node *& root)  // removes all from tree
{
    if (root)
    {
        remove_all(root->get_left());
        remove_all(root->get_right());
        delete root;
        root = nullptr;
    }

    return 1;
}

int bst::remove(const string to_remove)  // wrapper to remove a single character
{
    if (!root) return 0;
    return remove(root, to_remove);
}

int bst::remove(node*& root, const string to_remove)  // removes one character
{
    if(!root) return 0; 

    if(to_remove < root->get_name()) 
    {
        return remove(root->get_left(), to_remove);
    }
    else if(to_remove > root->get_name()) 
    {
        return remove(root->get_right(), to_remove);
    }
    else 
    {
        if(root->get_left() == nullptr) {
            node* temp = root->get_right();
            delete root;
            root = temp;
            return 1;
        }
        else if(root->get_right() == nullptr) 
        {
            node* temp = root->get_left();
            delete root;
            root = temp;
            return 1;
        }
        else 
        {
            node* temp = root->get_right();
            while(temp && temp->get_left() != nullptr) {
                temp = temp->get_left();
            }
            root->set_title(temp->get_name());
            return remove(root->get_right(), temp->get_name());
        }
    }
    return 0;
}

int bst::search(const string to_find)  // wrapper function to search for a character
{
    return search(root, to_find);
}


int bst::search(node* root, const string to_find)  // searchs for one character and dispalys info
{
    if (root == nullptr)
    {
        return 0;
    }
    if(root->get_name() == to_find)
    {
        cout << "Found: ";
        root->display();         // calls the display function ones its finds the character
        return 1;
    }
    if (to_find < root->get_name())
    {
        return search(root->get_left(), to_find);
    }
    return search(root->get_right(), to_find);
}

// ------ function to fight two character together

node* bst::get_node_by_name(const string& name)  // wrapper function
{
    return get_node_by_name(root, name);
}

node* bst::get_node_by_name(node* root, const string& name)  // gets the characters to fight
{
    if(!root) return 0;
    if(name == root->get_name()) 
    {
        return root;
    }
    if(name < root->get_name()) 
    {
        return get_node_by_name(root->get_left(), name);
    }
    return get_node_by_name(root->get_right(), name);
}

int bst::create_fight(const string& name1, const string& name2)  // determines the out come of the fight
{
    node* node1 = get_node_by_name(name1);
    node* node2 = get_node_by_name(name2);

    if(node1 == nullptr || node2 == nullptr) 
    {
        return 0;
    }
    string character1 = node1->get_name();
    string character2 = node2->get_name();

    int winner = rand() % 2;  // generates a random number either 0 or 1
    if (winner == 0) 
        cout << character1 << " won the battle." << endl;
    else 
        cout << character2 << " won the battle." << endl;
    return 1;
}