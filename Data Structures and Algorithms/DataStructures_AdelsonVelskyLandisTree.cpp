/*
	Adelson-Velsky and Landis Tree (AVL) - Implementation
*/

#include "DataStructures_AdelsonVelskyLandisTree.h"


AdelsonVelskyLandisTree::AdelsonVelskyLandisTree ()
{
	this->rootNode = nullptr;
}


unsigned short int AdelsonVelskyLandisTree::getHeight (AvlNode* tree)
{
	if (tree == nullptr)
		return 0;

	return tree->height;
}


int AdelsonVelskyLandisTree::getBalance (AvlNode* tree)
{
	if (tree == nullptr)
		return 0;

	return this->getHeight(tree->leftSubtree) - this->getHeight(tree->rightSubtree);
}


AvlNode* AdelsonVelskyLandisTree::createNewNode (unsigned int data)
{
	AvlNode* newNode = new AvlNode();
	newNode->data = data;
	newNode->height = 0;
	newNode->leftSubtree = nullptr;
	newNode->rightSubtree = nullptr;
	return newNode;
}


void AdelsonVelskyLandisTree::insertNode (unsigned int data)
{
	if (this->rootNode == nullptr)
		this->rootNode = createNewNode(data);

	else if (data < this->rootNode->data)
		this->rootNode->leftSubtree = createNewNode(data);

	else if (data > this->rootNode->data)
		this->rootNode->rightSubtree = createNewNode(data);

	// To be continued.
}