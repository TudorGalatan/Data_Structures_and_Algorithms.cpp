/*
	Adelson-Velsky and Landis Tree (AVL) - Interface
*/

#pragma once


struct AvlNode
{
	unsigned int data;
	AvlNode* leftSubtree;
	AvlNode* rightSubtree;
};


class AdelsonVelskyLandisTree
{
	private:

		AvlNode* rootNode;

		/*
			This is the default constructor of the class.
			Input:
				- none
			Output:
				- the class instance is initialized
		*/
		AdelsonVelskyLandisTree ();
};