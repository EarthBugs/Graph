#include <iostream>
#include "EdgeLinkedGraph.h"
using namespace std;

//深度优先遍历
template<class DataType>
void EdgeLinkedGraph<DataType>::DFT(int v, bool visited[])
{
	EdgeNode* ptr = NULL;
	int index = 0;
	cout << "已访问：" << adjlist[v].vertex << endl;
	visited[v] = true;
	ptr = adjlist[v].firstedge;
	while (ptr != NULL)
	{
		index = ptr->adjvex;
		if (visited[index] == false)
			DFT(index, visited);
		ptr = ptr->next;
	}
}

//广度优先遍历
template<class DataType>
void EdgeLinkedGraph<DataType>::BFT(int v, bool visited[])
{
	int Queue[MAXSIZE1];
	int front = -1, rear = -1;
	EdgeNode* ptr = nullptr;
	cout << "已访问：" << adjlist[v].vertex << endl;
	visited[v] = true;
	rear++;
	Queue[rear] = v;
	while (front != rear)
	{
		front++;
		v = Queue[front];
		ptr = adjlist[v].firstedge;
		while (ptr != nullptr)
		{
			int index = ptr->adjvex;
			if (visited[index] == false)
			{
				cout << "已访问：" << adjlist[index].vertex << endl;
				visited[index] = true;
				rear++;
				Queue[rear] = v;
			}
			ptr = ptr->next;
		}
	}
}

//构造函数
template<class DataType>
inline EdgeLinkedGraph<DataType>::EdgeLinkedGraph(DataType data[], int vertexNum, int edgeNum)
{
	this->vertexNum = vertexNum;
	this->edgeNum = edgeNum;
	for (int index = 0; index < vertexNum; index++)
	{
		adjlist[index].vertex = data[index];
		adjlist[index].firstedge = nullptr;
	}
	EdgeNode* temp;
	int index = 0, index1, index2;
	for (; index < edgeNum; index++)
	{
		cout << "请输入边两个顶点的序号：";
		cin >> index1 >> index2;
		temp = new EdgeNode;
		temp->adjvex = index2;
		temp->next = adjlist[index1].firstedge;
		adjlist[index1].firstedge = temp;
	}
}

//析构函数
template<class DataType>
EdgeLinkedGraph<DataType>::~EdgeLinkedGraph()
{
	EdgeNode* ptr = nullptr;
	for (int index = 0; index < vertexNum; index++)
	{
		ptr = adjlist[index].firstedge;
		while (ptr != nullptr && ptr->next != nullptr)
		{
			adjlist[index].firstedge = ptr->next;
			delete ptr;
		}
	}
}

//深度优先遍历
template<class DataType>
inline void EdgeLinkedGraph<DataType>::DeepFirstTraverse(int v)
{
	bool visited[MAXSIZE1]{ 0 };
	DFT(v, visited);
}

//广度优先遍历
template<class DataType>
inline void EdgeLinkedGraph<DataType>::BreathFirstTraverse(int v)
{
	bool visited[MAXSIZE1]{ 0 };
	BFT(v, visited);
}
