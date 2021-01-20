/*
	Undirected Graph - Implementation
*/

#include "DataStructures_UndirectedGraph.h"


UndirectedGraph::UndirectedGraph ()
{
	this->loadInputData();
}


void UndirectedGraph::loadInputData ()
{
	std::ifstream inputFile ("InputData_UndirectedGraph.in");
	
	inputFile >> this->numberOfVertices;
	for (unsigned int line = 0; line < this->numberOfVertices; line++)
		for (unsigned int column = 0; column < this->numberOfVertices; column++)
			inputFile >> this->adjacencyMatrix[line][column];

	inputFile.close();
}


bool UndirectedGraph::isEmpty ()
{
	if (this->numberOfVertices)
		return false;

	for (unsigned int line = 0; line < this->numberOfVertices; line++)
		for (unsigned int column = 0; column < this->numberOfVertices; column++)
			if (this->adjacencyMatrix[line][column])
				return false;

	return true;
}


void UndirectedGraph::insertVertex ()
{
	this->numberOfVertices++;

	unsigned int column = this->numberOfVertices - 1;
	for (unsigned int line = 0; line < this->numberOfVertices; line++)
		this->adjacencyMatrix[line][column] = 0;

	unsigned int line = column;
	for (unsigned int column = 0; column < this->numberOfVertices; column++)
		this->adjacencyMatrix[line][column] = 0;
}


void UndirectedGraph::insertEdge (unsigned int firstNode, unsigned int secondNode)
{
	this->adjacencyMatrix[firstNode][secondNode] = 1;
	this->adjacencyMatrix[secondNode][firstNode] = 1;
}


void UndirectedGraph::depthFirstSearch (unsigned int startNode)
{
	std::vector <bool> visitedVertices (this->numberOfVertices, false);
	std::stack <unsigned int> stackOfVertices;

	stackOfVertices.push(startNode);

	while (not stackOfVertices.empty())
	{
		unsigned int currentVertex = stackOfVertices.top();
		stackOfVertices.pop();

		if (not visitedVertices[currentVertex])
		{
			std::cout << currentVertex << ' ';
			visitedVertices[currentVertex] = true;
		}

		for (unsigned int line = 0; line < this->numberOfVertices; line++)
			if (adjacencyMatrix[line][currentVertex])
				if (not visitedVertices[line])
					stackOfVertices.push(line);
	}
}