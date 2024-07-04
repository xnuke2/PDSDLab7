
#include <iostream>
#include "BinarySearchTree.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    BinarySearchTree* tree1 = new BinarySearchTree();
    cout << "Создано пустое дерево " << endl;
    cout << "Проверка дерева на пустоту " << endl;
    if(tree1->IsEmpty())cout << "Дерво пусто " << endl;
    else cout << "Дерво пусто " << endl;
    cout << "Добавлено значение 5" << endl;
    tree1->Add(5);
    cout << "Добавлено значение 2" << endl;
    tree1->Add(2);
    cout << "Добавлено значение 8" << endl;
    tree1->Add(8);
    cout << "Добавлено значение 1" << endl;
    tree1->Add(1);
    cout << "Добавлено значение 5" << endl;
    tree1->Add(5);
    cout << "Добавлено значение 3" << endl;
    tree1->Add(3);
    cout << "Сверху вниз " + tree1->UpDown() << endl;
    cout << "Слева направо " + tree1->LeftRight() << endl;
    cout << "Снизу вверх " + tree1->DownUp() << endl;

    BinarySearchTree* tree = new BinarySearchTree(1, 100, 10);
    cout << "Создано дерево из 10 элементов от 1 до 100" << endl;
    cout <<"Значения в порядке вставки: "+ tree->nums << endl;
    string tmp1 = tree->UpDown();
    cout << "Сверху вниз "+tmp1 << endl;
    string tmp2 = tree->LeftRight();
    cout << "Слева направо " + tmp2 << endl;
    string tmp3 = tree->DownUp();
    cout << "Снизу вверх " + tmp3 << endl;
    delete tree;
}

