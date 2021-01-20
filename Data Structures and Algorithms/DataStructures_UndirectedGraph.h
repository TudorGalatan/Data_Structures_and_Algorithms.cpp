/*
	Undirected Graph - Interface
*/

#pragma once

#include <fstream>
#include <iostream>
#include <vector>
#include <stack>

#define CAPACITY 100


class UndirectedGraph
{
	private:

		unsigned int numberOfVertices;
		bool adjacencyMatrix[CAPACITY][CAPACITY];

		UndirectedGraph ();

		void loadInputData ();

		bool isEmpty ();

		void insertVertex ();

		void insertEdge (unsigned int firstNode, unsigned int secondNode);

		void depthFirstSearch (unsigned int startNode);
};