#include <iostream>
#include "MatrixGraph.h"
using namespace std;

//������ȱ���
template<class DataType>
void MatrixGraph<DataType>::DFT(int v, bool visited[])
{
	cout << "�ѷ��ʣ�" << vertex[v];
	visited[v] = true;
	for (int index = 0; index < vertexNum; index++)
		if (edge[v][index] == 1 && visited[index] == 0)
			DFT(index, visited);
}

//������ȱ���
template<class DataType>
void MatrixGraph<DataType>::BFT(int v, bool visited[])
{
	int Queue[MAXSIZE];//����
	int front, rear = -1;//��ʼ������
	cout << "�ѷ��ʣ�" << vertex[v];
	visited[v] = true;

}

//���캯��
template<class DataType>
inline MatrixGraph<DataType>::MatrixGraph(DataType input[], int vertex, int edge)
{
	vertexNum = vertex;
	edgeNum = edge;
	//�洢ͼ�Ķ���
	for (int index = 0��index < vertexNum; index++)
		vertex[index] = input[index];
	//���ڽӾ�������
	for (int index = 0; index < vertexNum; index++)
	{
		for (int index1 = 0; index1 < vertexNum; index1++)
		{
			edge[index][index1] = 0;
		}
	}
	//�洢ͼ�ı���Ϣ
	for (int index = 0, int index1, int index2 ; k < edgeNum; index++)
	{
		cout << "������ߵ������������ţ�";
		cin >> index1 >> index2;
		edge[index1][index2];
	}
}

//������ȱ���
template<class DataType>
inline void MatrixGraph<DataType>::DeepFirstTraverse(int v)
{
	bool visited[MAXSIZE] = false;
	DFT(int v, bool visited[]);
}

//������ȱ���
template<class DataType>
inline void MatrixGraph<DataType>::BreathFirstTraverse(int v)
{
	bool visited[MAXSIZE] = false;
	BFT(int v, bool visited[]);
}
