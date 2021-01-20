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


void UndirectedGraph::removeVertex (unsigned int vertex)
{
	for (unsigned int line = 0; line < this->numberOfVertices; line++)
		for (unsigned int column = 0; column < this->numberOfVertices; column++)
		{
			if (line > vertex)
				this->adjacencyMatrix[line - 1][column] = this->adjacencyMatrix[line][column];
			if (column > vertex)
				this->adjacencyMatrix[line][column - 1] = this->adjacencyMatrix[line][column];
		}

	this->numberOfVertices--;
}


void UndirectedGraph::insertEdge (unsigned int firstNode, unsigned int secondNode)
{
	this->adjacencyMatrix[firstNode][secondNode] = 1;
	this->adjacencyMatrix[secondNode][firstNode] = 1;
}


void UndirectedGraph::removeEdge (unsigned int firstNode, unsigned int secondNode)
{
	this->adjacencyMatrix[firstNode][secondNode] = 0;
	this->adjacencyMatrix[secondNode][firstNode] = 0;
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


unsigned int UndirectedGraph::connectedComponents ()
{
	bool visitedVertices[1000];
	for (unsigned int index = 0; index < this->numberOfVertices; index++)
		visitedVertices[index] = false;

	unsigned int connectedComponents = 0;
	for (unsigned int index = 0; index < this->numberOfVertices; index++)
		if (not visitedVertices[index])
		{
			connectedComponents++;
			recursiveDfsForConnectedComponents(visitedVertices, index);
		}

	return connectedComponents;
}


void UndirectedGraph::recursiveDfsForConnectedComponents (bool visitedVertices[], unsigned int vertex)
{
	visitedVertices[vertex] = true;

	for (unsigned int line = 0; line < this->numberOfVertices; line++)
		if (this->adjacencyMatrix[line][vertex] && not visitedVertices[line])
			recursiveDfsForConnectedComponents(visitedVertices, vertex);
}