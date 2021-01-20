/*
	Binary Search Tree (BST) - Implementation
*/

#include "DataStructures_BinarySearchTree.h"


BinarySearchTree::BinarySearchTree ()
{
	this->rootNode = nullptr;
}


BstNode* BinarySearchTree::createNewNode (unsigned int data)
{
	BstNode* newNode = new BstNode();
	newNode->data = data;
	newNode->leftSubtree = nullptr;
	newNode->rightSubtree = nullptr;
	return newNode;
}


void BinarySearchTree::insertNode (unsigned int data)
{
	if (this->rootNode == nullptr)
		this->rootNode = this->createNewNode(data);

	else if (data <= this->rootNode->data)
		this->rootNode->leftSubtree = this->createNewNode(data);

	else
		this->rootNode->rightSubtree = this->createNewNode(data);
}


void BinarySearchTree::deleteNode (unsigned int data)
{

}