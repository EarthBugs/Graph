#include <iostream>
#include "MatrixGraph.h"
using namespace std;

//������ȱ���
template<class DataType>
void MatrixGraph<DataType>::DFT(int v, bool visited[])
{
	cout << "�ѷ��ʣ�" << vertex[v] << endl;
	visited[v] = true;
	for (int index = 0; index < vertexNum; index++)
		if (edge[v][index] == true && visited[index] == 0)
			DFT(index, visited);
}

//������ȱ���
template<class DataType>
void MatrixGraph<DataType>::BFT(int v, bool visited[])
{
	int Queue[MAXSIZE];//����
	int front = -1, rear = -1;//��ʼ������
	cout << "�ѷ��ʣ�" << vertex[v] << endl;
	visited[v] = true;
	Queue[++rear] = v;
	while (front != rear)
	{
		front++;
		v = Queue[front];
		for (int index = 0; index < vertexNum; index++)
			if (edge[v][index] == true && visited[index] == false)
			{
				cout << "�ѷ��ʣ�" << vertex[index] << endl;
				visited[index] = true;
				rear++;
				Queue[rear] = index;
			}
	}
}

//���캯��
template<class DataType>
inline MatrixGraph<DataType>::MatrixGraph(DataType input[], int vertexNum, int edgeNum)
{
	this->vertexNum = vertexNum;
	this->edgeNum = edgeNum;
	//�洢ͼ�Ķ���
	for (int index = 0; index < vertexNum; index++)
		vertex[index] = input[index];
	//���ڽӾ�������
	for (int index = 0; index < vertexNum; index++)
	{
		for (int index1 = 0; index1 < vertexNum; index1++)
		{
			edge[index][index1] = false;
		}
	}
	//�洢ͼ�ı���Ϣ
	for (int index = 0, index1, index2; index < edgeNum; index++)
	{
		cout << "������ߵ������������ţ�";
		cin >> index1 >> index2;
		edge[index1][index2] = true; edge[index2][index1] = true;
	}
}

//������ȱ���
template<class DataType>
inline void MatrixGraph<DataType>::DeepFirstTraverse(int v)
{
	bool visited[MAXSIZE]{ false };
	DFT(v, visited);
}

//������ȱ���
template<class DataType>
inline void MatrixGraph<DataType>::BreathFirstTraverse(int v)
{
	bool visited[MAXSIZE]{ false };
	BFT(v, visited);
}
