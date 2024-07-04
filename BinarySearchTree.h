#pragma once
#include <iostream>
#include <vector>
using std::vector;
#include <string>
using std::string;
using std::to_string;
class BinarySearchTree
{
private:
	struct TreeNode {

		int value;
		TreeNode* left;
		TreeNode* right;
		TreeNode(int val)
		{
			value = val;
			left = nullptr;
			right = nullptr;
		}

	};

	TreeNode* head;
public:
	string nums = "";
	BinarySearchTree() {
		head = NULL;
	}
	bool IsEmpty() {
		return head == NULL;
	}
	void Add(int val) {
		Add(head, val);
		nums +=" "+ to_string(val) ;
	}
	void Add(TreeNode* &r, int val)
	{
		if (!r)
		{
			r = new TreeNode(val);
			r->left = r->right = NULL;
		}
		else if (val < r->value)
			Add(r->left, val);
		else
			Add(r->right, val);
	}
	BinarySearchTree(int min,int max, int length) {
		head = NULL;
		for (int i = 0; i < length; i++) {
			int tmp = rand() % (max - min + 1) + min;
			Add(tmp);
		}
		
	}
	string UpDown() {
		string tmp ="";
		tmp = UpDown(head);
		return tmp;
	}
	string UpDown(TreeNode* _head) {
		string tmp = "";
		tmp += to_string(_head->value);
		if (_head->left != NULL)tmp+= " "+UpDown(_head->left);
		if (_head->right != NULL)tmp += " " + UpDown(_head->right);
		return tmp;
	}
	string LeftRight() {
		string tmp = "";
		tmp = LeftRight(head);
		return tmp;
	}
	string LeftRight(TreeNode* _head) {
		string tmp = "";
		if (_head->left != NULL)tmp += LeftRight(_head->left)+ " ";
		tmp += to_string(_head->value);
		if (_head->right != NULL)tmp += " " + LeftRight(_head->right);
		return tmp;

	}
	string DownUp() {
		string tmp = "";
		tmp = DownUp(head);
		return tmp;
	}
	string DownUp(TreeNode* _head) {
		string tmp = "";
		if (_head->left != NULL)tmp += DownUp(_head->left) + " ";
		if (_head->right != NULL)tmp += DownUp(_head->right)+" ";
		tmp += to_string(_head->value);
		return tmp;
	}
	~BinarySearchTree() {
		Delete();
	}
	void Delete() {
		if (IsEmpty())return;
		Delete(head);
		head = NULL;
	}
	void Delete(TreeNode*& _head) {
		
		if (_head->left != NULL)Delete(_head->left);
		if (_head->right != NULL)Delete(_head->right);
		delete _head;
		return;
	}
};

