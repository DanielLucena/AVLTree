#include "AVLTree.h"

#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
    std::cout << "Hello AVLTree!" << std::endl;
    std::cout << "Digite um comando (insert, delete. print, exit): ";
    AVLTree tree;
    AVLTree::node* root = nullptr;
    root = tree.insert(root, 10);
    std::string command;
    while(true){
        std::cin >> command;
        if(command == "insert"){
            int value;
            std::cin >> value;
            root = tree.insert(root, value);
        }
        else if(command == "delete"){
            int value;
            std::cin >> value;
            root = tree.deleteNode(root, value);
        }
        else if(command == "print"){
            tree.printTree(root,0);
            std::cout << std::endl;
        }
        else if(command == "exit"){
            break;
        }
        else{
            std::cout << "Invalid command" << std::endl;
        }

    }
    


    std::cout << std::endl;

    tree.deleteTree(root); 
    //controller(treePtr);
    return 0;
}
