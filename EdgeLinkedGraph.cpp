#include <iostream>
#include "EdgeLinkedGraph.h"
using namespace std;

//������ȱ���
template<class DataType>
void EdgeLinkedGraph<DataType>::DFT(int v, bool visited[])
{
	EdgeNode* ptr = NULL;
	int index = 0;
	cout << "�ѷ��ʣ�" << adjlist[v].vertex << endl;
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

//������ȱ���
template<class DataType>
void EdgeLinkedGraph<DataType>::BFT(int v, bool visited[])
{
	int Queue[MAXSIZE1];
	int front = -1, rear = -1;
	EdgeNode* ptr = nullptr;
	cout << "�ѷ��ʣ�" << adjlist[v].vertex << endl;
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
				cout << "�ѷ��ʣ�" << adjlist[index].vertex << endl;
				visited[index] = true;
				rear++;
				Queue[rear] = v;
			}
			ptr = ptr->next;
		}
	}
}

//���캯��
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
		cout << "������������������ţ�";
		cin >> index1 >> index2;
		temp = new EdgeNode;
		temp->adjvex = index2;
		temp->next = adjlist[index1].firstedge;
		adjlist[index1].firstedge = temp;
	}
}

//��������
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

//������ȱ���
template<class DataType>
inline void EdgeLinkedGraph<DataType>::DeepFirstTraverse(int v)
{
	bool visited[MAXSIZE1]{ 0 };
	DFT(v, visited);
}

//������ȱ���
template<class DataType>
inline void EdgeLinkedGraph<DataType>::BreathFirstTraverse(int v)
{
	bool visited[MAXSIZE1]{ 0 };
	BFT(v, visited);
}
