/*
	Adelson-Velsky and Landis Tree (AVL) - Interface
*/

#pragma once


struct AvlNode
{
	unsigned int data;
	unsigned short int height;
	AvlNode* leftSubtree;
	AvlNode* rightSubtree;
};


class AdelsonVelskyLandisTree
{
	public:

		AvlNode* rootNode;

		/*
			This is the default constructor of the class.
			Input:
				- none
			Output:
				- the class instance is initialized
		*/
		AdelsonVelskyLandisTree ();

		unsigned short int getHeight (AvlNode* tree);

		int getBalance (AvlNode* tree);

		AvlNode* createNewNode (unsigned int data);

		void insertNode (unsigned int data);
};