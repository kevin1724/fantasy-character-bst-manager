# 🧙‍♂️ Binary Search Tree Fantasy Character Manager

A C++ program that manages a collection of fantasy characters—**Wizards**, **Dragons**, and **Titans**—using a **Binary Search Tree (BST)**. Each character type has unique attributes, and users can interact with the system through a console-based menu.

## 🚀 Features

- **Add New Character:**  
  Create a new character (Wizard, Dragon, or Titan) and insert them into the BST based on their name. Character type is handled using Runtime Type Identification (RTTI).

- **Display All Characters:**  
  View all characters stored in the BST via in-order traversal.

- **Search by Name:**  
  Find a specific character by name and display their stats.

- **Remove a Character:**  
  Delete a character by name from the BST.

- **Clear All Characters:**  
  Wipe the entire tree and delete all nodes/characters.

- **Battle System:**  
  Select any two characters to simulate a fight. A random winner is declared for fun!

---

## 🛠️ Compilation & Usage

### ✅ Compile:
```bash
g++ -std=c++17 *.cpp -o character_manager -g -Wall
```

### ▶️ Run:
```bash
./character_manager
```

### 🧪 Menu Options:
```
1 - Add a new character
2 - Search for a character
3 - Remove a character
4 - Display all characters
5 - Remove all characters
6 - Battle two characters
0 - Exit the program
```

---

## 📁 Character Types & Attributes

| Type   | Attributes                            |
|--------|----------------------------------------|
| Wizard | Attack Range                          |
| Dragon | Speed, Fire Damage                    |
| Titan  | HP Regain, Attack Power               |

Each character is implemented as a subclass of a base `character` class, demonstrating object-oriented programming with inheritance and polymorphism.

---

## 👤 Author
**Kevin Ruiz Arzate**  
Program 3
