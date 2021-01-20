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

		void removeVertex (unsigned int vertex);

		void insertEdge (unsigned int firstNode, unsigned int secondNode);

		void removeEdge (unsigned int firstNode, unsigned int secondNode);

		void depthFirstSearch (unsigned int startNode);

		unsigned int connectedComponents ();

		void recursiveDfsForConnectedComponents (bool visitedVertices[], unsigned int vertex);
};