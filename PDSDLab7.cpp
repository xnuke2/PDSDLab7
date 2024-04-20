
#include <iostream>
#include "BinarySearchTree.h"

int main()
{
    BinarySearchTree* tree1 = new BinarySearchTree();
    tree1->Add(5);
    tree1->Add(2);
    tree1->Add(8);
    tree1->Add(1);
    tree1->Add(5);
    tree1->Add(3);
    BinarySearchTree* tree = new BinarySearchTree(1, 100, 10);
    string tmp1 = tree->UpDown();
    string tmp2 = tree->LeftRight();
    string tmp3 = tree->DownUp();
    delete tree;
}

