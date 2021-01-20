/*
	Binary Search Tree (BST) - Interface
*/

#pragma once


struct Node
{
	unsigned int data;
	Node* leftSubtree;
	Node* rightSubtree;
};


class BinarySearchTree
{
	private:

		Node* rootNode;

		/*
			This is the default constructor of the class.
			Input:
				- none
			Output:
				- the class instance is initialized
		*/
		BinarySearchTree ();

		/*
			Creates a new node.
			Input:
				- "data": the data of the new node
			Output:
				- a new node is created
		*/
		Node* createNewNode (unsigned int data);

		/*
			Inserts a new node into the binary search tree.
			Input:
				- "data": the data of the new node
			Output:
				- the new node is added to the binary search tree
		*/
		void insertNode (unsigned int data);

		/*
			Deletes a node from the binary search tree.
			Input:
				- "data": the data of the new node
			Output:
				- the new node is added to the binary search tree
		*/
		void deleteNode (unsigned int data);
};